#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QProcess>
#include <QMessageBox>
#include <QFileDialog>

namespace Ui {
    class Dialog;
}

class Dialog : public QDialog {
    Q_OBJECT
public:
    Dialog(QWidget *parent = 0);
    ~Dialog();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::Dialog *ui;

	QMessageBox msgBox;

    QProcess process;

    QString sourceRoot;
    QString targetFile;

    QString formTitle;
private slots:
    void onStart();
    void onFinish();
    void updateOutput();

    void changeTimeStamp();
    void selectSource();
    void selectTarget();
    void onExit();
    void onAbout();
};

#endif // DIALOG_H
