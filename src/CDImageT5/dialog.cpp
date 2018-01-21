#include "dialog.h"
#include "ui_dialog.h"

#include <QFileInfo>
#include <QFile>
#include <QCryptographicHash>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{

	ui->setupUi(this);
    setLayout(ui->horizontalLayout_7);

    connect(ui->btnStart, SIGNAL(clicked()), this, SLOT(onStart()));
    connect(&process, SIGNAL(readyReadStandardOutput()), this, SLOT(updateOutput()));
    connect(&process, SIGNAL(finished(int)), this, SLOT(onFinish()));

    connect(ui->btnSource, SIGNAL(clicked()), this, SLOT(selectSource()));
    connect(ui->btnTarget, SIGNAL(clicked()), this, SLOT(selectTarget()));
    connect(ui->btnExit, SIGNAL(clicked()), this, SLOT(onExit()));
    connect(ui->btnAbout, SIGNAL(clicked()), this, SLOT(onAbout()));

    connect(ui->chkTimeStamp, SIGNAL(clicked()), this, SLOT(changeTimeStamp()));

    formTitle = "Simple CDImage GUI";
    this->setWindowTitle(formTitle);

	// UI Redefinition
	ui->chkLargeSize->setVisible(false);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void Dialog::onStart()
{
	// Check "CDImage.exe" ver 2.39
	QFileInfo cdimage("CDImage.exe");
	if( !cdimage.exists())
	{
        msgBox.setWindowTitle("Error");
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setText("CDImage.exe doesn't exist!");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();

        return;
	}

	QFile file("CDImage.exe");
	if( !file.open(QIODevice::ReadOnly))
	{
	    msgBox.setWindowTitle("Error");
		msgBox.setIcon(QMessageBox::Warning);
		msgBox.setText("Cannot open CDImage.exe");
		msgBox.setStandardButtons(QMessageBox::Ok);
		msgBox.exec();

		return;
	}

	// Hash it
	QByteArray input(file.readAll());
	QCryptographicHash hash(QCryptographicHash::Md5);
	QByteArray output = hash.hash(input, QCryptographicHash::Md5);
	QString hashCode = QString(output.toHex());

	file.close();

	if( hashCode.toLower() != "ef19696cb2d504993cc2660d280d77bb")
	{
		msgBox.setWindowTitle("Error");
		msgBox.setIcon(QMessageBox::Warning);
		msgBox.setText("The CDImage.exe is not version 2.39.");
		msgBox.setStandardButtons(QMessageBox::Ok);
		msgBox.exec();

		return;
	}

	// Execute
    QStringList args;

    // 1. Label
    QString strLabel = ui->txtLabel->text();
    strLabel.replace(" ", "");
    if(strLabel != "")
    {
        strLabel = "-l" + strLabel;
        args << strLabel;
    }

    // 2. Format
    if(ui->rdoIso9660->isChecked())
    {
        args << "-w2";
    }
    else if(ui->rdoJoliet->isChecked())
    {
        args << "-j1";
    }
    else if(ui->rdoUdf->isChecked())
    {
        args << "-u1";
    }

    // 3. Time Stamp
    if(ui->chkTimeStamp->isChecked())
    {
        QTime time = ui->dateTimeEdit->time();
        QString strTime = time.toString("M/d/yy,H:mm:ss");
        strTime = "-t" + strTime;
        args << strTime;
    }

    // 4. Include Hidden
    if(ui->chkHidden->isChecked())
    {
        args << "-h";
    }

    // 5. Only once
    if(ui->chkCompress->isChecked())
    {
        args << "-o";
    }

    // 6. Larger than 650MB
    if(ui->chkLargeSize->isChecked())
    {
        args << "-m";
    }

    // 7. Source Folder
    sourceRoot = ui->txtSource->text();
    targetFile = ui->txtTarget->text();

	if(targetFile.right(4) != ".iso")
	{
		targetFile = targetFile + ".iso";
	}

    QFileInfo source(sourceRoot);
    QFileInfo target(targetFile);

    if(!source.isDir())
    {
        msgBox.setWindowTitle("Error");
        msgBox.setIcon(QMessageBox::Warning);
        msgBox.setText("The folder doesn't exist!");
        msgBox.setStandardButtons(QMessageBox::Ok);
        msgBox.exec();

        return;
    }

    // 8. Target File
    if(target.exists())
    {
        msgBox.setWindowTitle("Notice");
        msgBox.setIcon(QMessageBox::Question);
        msgBox.setText("The file already exists.\nDo you want to overwrite?");
        //msgBox.setInformativeText("Do you want to overwrite?");
        msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
        msgBox.setDefaultButton(QMessageBox::No);

        int ret = msgBox.exec();
        if(ret == QMessageBox::No)
        {
            return;
        }
    }

    args << sourceRoot;
    args << targetFile;

    ui->textEdit->setPlainText("");
    ui->btnStart->setEnabled(false);
    process.start("CDImage", args);
}

void Dialog::onFinish()
{
    this->setWindowTitle(formTitle);
    int code = process.exitCode();
    QMessageBox msgBox;

    if(code == 0)
    {
        msgBox.setWindowTitle("Done");
        msgBox.setText("The CD image file has been successfully created.");
    }
    else
    {
        msgBox.setWindowTitle("Error");
        msgBox.setText("An error has occurred while creating the CD image.");
    }

    msgBox.setIcon(QMessageBox::Information);
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();

    ui->btnStart->setEnabled(true);
}

void Dialog::updateOutput()
{
    QByteArray newData = process.readAllStandardOutput();
    QString newString = QString::fromLocal8Bit(newData);

    newString.replace("\r", "\n");
    QStringList lines = newString.split("\n", QString::SkipEmptyParts);

    QString line;
    for(int x=0; x<lines.size(); x++)
    {
        line = lines.at(x);
        if(line.right(10) == "% complete")
        {
            int pgs = line.left(line.length() - 10).toInt();
            pgs = pgs > 100 ? 100 : pgs;
            ui->progressBar->setValue(pgs);

            // Window Title
            this->setWindowTitle(formTitle + " - " + line.left(line.length() - 10) + "%");
        }
        else if(line == "For Microsoft internal use only." ||
                line == "Computing directory information complete")
        {
            // add new lines in some places
            ui->textEdit->setPlainText(ui->textEdit->toPlainText() + line + "\n\n");
        }
        else if(line.left(19) == "Final image file is")
        {
            // add new lines in some places
            ui->textEdit->setPlainText(ui->textEdit->toPlainText() + "\n" + line + "\n");
        }
        else if(line == "Done.")
        {
            // do nothing
        }
        else
        {
            ui->textEdit->setPlainText(ui->textEdit->toPlainText() + line + "\n");
        }
    }

}

void Dialog::changeTimeStamp()
{
    if(ui->chkTimeStamp->isChecked())
    {
        ui->dateTimeEdit->setEnabled(true);
    }
    else
    {
        ui->dateTimeEdit->setEnabled(false);
    }
}

void Dialog::selectSource()
{
    QFileDialog dialog;
    dialog.setFileMode(QFileDialog::Directory);

    if(dialog.exec())
    {
        ui->txtSource->setText(dialog.selectedFiles().front());
    }
}

void Dialog::selectTarget()
{
    QFileDialog dialog;
    dialog.setFileMode(QFileDialog::AnyFile);
    dialog.setFilter("CD Image (*.iso);;All files (*.*)");

    if(dialog.exec())
    {
        ui->txtTarget->setText(dialog.selectedFiles().front());
    }
}

void Dialog::onExit()
{
    this->accept();
}

void Dialog::onAbout()
{
    QMessageBox msgBox;

    msgBox.setWindowTitle("About the program");
    msgBox.setIcon(QMessageBox::Information);
    msgBox.setText("Simple CDImage GUI\nWorks with CDImage 2.39\n\nAuthor:F32 (feng32@163.com)");
    msgBox.setStandardButtons(QMessageBox::Ok);
    msgBox.exec();
}
