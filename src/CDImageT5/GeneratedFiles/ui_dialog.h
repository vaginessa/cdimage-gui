/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Sun Jul 25 18:27:21 2010
**      by: Qt User Interface Compiler version 4.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *lblSource;
    QLineEdit *txtSource;
    QPushButton *btnSource;
    QHBoxLayout *horizontalLayout_2;
    QLabel *lblTarget;
    QLineEdit *txtTarget;
    QPushButton *btnTarget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *lblVolumLabel;
    QLineEdit *txtLabel;
    QHBoxLayout *horizontalLayout_5;
    QGroupBox *grpFormat;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QRadioButton *rdoIso9660;
    QRadioButton *rdoJoliet;
    QRadioButton *rdoUdf;
    QSpacerItem *horizontalSpacer;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QCheckBox *chkTimeStamp;
    QDateTimeEdit *dateTimeEdit;
    QCheckBox *chkHidden;
    QCheckBox *chkCompress;
    QCheckBox *chkLargeSize;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnStart;
    QPushButton *btnAbout;
    QPushButton *btnExit;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->resize(586, 513);
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 20, 541, 471));
        horizontalLayout_7 = new QHBoxLayout(layoutWidget);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(15, 15, 15, 15);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, -1, 0, -1);
        lblSource = new QLabel(layoutWidget);
        lblSource->setObjectName(QString::fromUtf8("lblSource"));
        lblSource->setMinimumSize(QSize(72, 0));

        horizontalLayout->addWidget(lblSource);

        txtSource = new QLineEdit(layoutWidget);
        txtSource->setObjectName(QString::fromUtf8("txtSource"));
        txtSource->setReadOnly(true);

        horizontalLayout->addWidget(txtSource);

        btnSource = new QPushButton(layoutWidget);
        btnSource->setObjectName(QString::fromUtf8("btnSource"));
        btnSource->setMaximumSize(QSize(50, 16777215));

        horizontalLayout->addWidget(btnSource);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lblTarget = new QLabel(layoutWidget);
        lblTarget->setObjectName(QString::fromUtf8("lblTarget"));
        lblTarget->setMinimumSize(QSize(72, 0));

        horizontalLayout_2->addWidget(lblTarget);

        txtTarget = new QLineEdit(layoutWidget);
        txtTarget->setObjectName(QString::fromUtf8("txtTarget"));
        txtTarget->setReadOnly(true);

        horizontalLayout_2->addWidget(txtTarget);

        btnTarget = new QPushButton(layoutWidget);
        btnTarget->setObjectName(QString::fromUtf8("btnTarget"));
        btnTarget->setMaximumSize(QSize(50, 16777215));

        horizontalLayout_2->addWidget(btnTarget);


        verticalLayout_3->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        lblVolumLabel = new QLabel(layoutWidget);
        lblVolumLabel->setObjectName(QString::fromUtf8("lblVolumLabel"));
        lblVolumLabel->setMinimumSize(QSize(72, 0));

        horizontalLayout_3->addWidget(lblVolumLabel);

        txtLabel = new QLineEdit(layoutWidget);
        txtLabel->setObjectName(QString::fromUtf8("txtLabel"));

        horizontalLayout_3->addWidget(txtLabel);


        verticalLayout_3->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, 8, -1, 5);
        grpFormat = new QGroupBox(layoutWidget);
        grpFormat->setObjectName(QString::fromUtf8("grpFormat"));
        grpFormat->setMinimumSize(QSize(160, 88));
        layoutWidget1 = new QWidget(grpFormat);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 20, 75, 65));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        rdoIso9660 = new QRadioButton(layoutWidget1);
        rdoIso9660->setObjectName(QString::fromUtf8("rdoIso9660"));

        verticalLayout_2->addWidget(rdoIso9660);

        rdoJoliet = new QRadioButton(layoutWidget1);
        rdoJoliet->setObjectName(QString::fromUtf8("rdoJoliet"));

        verticalLayout_2->addWidget(rdoJoliet);

        rdoUdf = new QRadioButton(layoutWidget1);
        rdoUdf->setObjectName(QString::fromUtf8("rdoUdf"));
        rdoUdf->setChecked(true);

        verticalLayout_2->addWidget(rdoUdf);


        horizontalLayout_5->addWidget(grpFormat);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        chkTimeStamp = new QCheckBox(layoutWidget);
        chkTimeStamp->setObjectName(QString::fromUtf8("chkTimeStamp"));

        horizontalLayout_4->addWidget(chkTimeStamp);

        dateTimeEdit = new QDateTimeEdit(layoutWidget);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setEnabled(false);
        dateTimeEdit->setDateTime(QDateTime(QDate(2010, 1, 1), QTime(0, 0, 0)));

        horizontalLayout_4->addWidget(dateTimeEdit);


        verticalLayout->addLayout(horizontalLayout_4);

        chkHidden = new QCheckBox(layoutWidget);
        chkHidden->setObjectName(QString::fromUtf8("chkHidden"));

        verticalLayout->addWidget(chkHidden);

        chkCompress = new QCheckBox(layoutWidget);
        chkCompress->setObjectName(QString::fromUtf8("chkCompress"));

        verticalLayout->addWidget(chkCompress);

        chkLargeSize = new QCheckBox(layoutWidget);
        chkLargeSize->setObjectName(QString::fromUtf8("chkLargeSize"));
        chkLargeSize->setChecked(true);

        verticalLayout->addWidget(chkLargeSize);


        horizontalLayout_5->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout_5);

        progressBar = new QProgressBar(layoutWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setEnabled(false);
        progressBar->setValue(0);
        progressBar->setTextVisible(false);
        progressBar->setInvertedAppearance(false);
        progressBar->setTextDirection(QProgressBar::TopToBottom);

        verticalLayout_3->addWidget(progressBar);

        verticalSpacer = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer);

        textEdit = new QTextEdit(layoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        textEdit->setReadOnly(true);
        textEdit->setAcceptRichText(false);

        verticalLayout_3->addWidget(textEdit);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        btnStart = new QPushButton(layoutWidget);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));

        horizontalLayout_6->addWidget(btnStart);

        btnAbout = new QPushButton(layoutWidget);
        btnAbout->setObjectName(QString::fromUtf8("btnAbout"));

        horizontalLayout_6->addWidget(btnAbout);

        btnExit = new QPushButton(layoutWidget);
        btnExit->setObjectName(QString::fromUtf8("btnExit"));

        horizontalLayout_6->addWidget(btnExit);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_3);


        verticalLayout_3->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout_3);

        horizontalSpacer_4 = new QSpacerItem(0, 0, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QApplication::translate("Dialog", "Simple CDImage GUI", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        Dialog->setWhatsThis(QString());
#endif // QT_NO_WHATSTHIS
        lblSource->setText(QApplication::translate("Dialog", "Source Root", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        txtSource->setWhatsThis(QApplication::translate("Dialog", "Everything in the folder is to be added to the iso image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        btnSource->setText(QApplication::translate("Dialog", "...", 0, QApplication::UnicodeUTF8));
        lblTarget->setText(QApplication::translate("Dialog", "Target File", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        txtTarget->setWhatsThis(QApplication::translate("Dialog", "The location of the generated iso image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        btnTarget->setText(QApplication::translate("Dialog", "...", 0, QApplication::UnicodeUTF8));
        lblVolumLabel->setText(QApplication::translate("Dialog", "Volume Label", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        txtLabel->setWhatsThis(QApplication::translate("Dialog", "The volume label of the generated iso image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        txtLabel->setText(QApplication::translate("Dialog", "MyDisc", 0, QApplication::UnicodeUTF8));
        grpFormat->setTitle(QApplication::translate("Dialog", "Iso Format", 0, QApplication::UnicodeUTF8));
        rdoIso9660->setText(QApplication::translate("Dialog", "ISO-9660", 0, QApplication::UnicodeUTF8));
        rdoJoliet->setText(QApplication::translate("Dialog", "Joliet", 0, QApplication::UnicodeUTF8));
        rdoUdf->setText(QApplication::translate("Dialog", "UDF", 0, QApplication::UnicodeUTF8));
        chkTimeStamp->setText(QApplication::translate("Dialog", "Reset time stamp", 0, QApplication::UnicodeUTF8));
        dateTimeEdit->setDisplayFormat(QApplication::translate("Dialog", "yyyy/M/d H:mm:ss", 0, QApplication::UnicodeUTF8));
        chkHidden->setText(QApplication::translate("Dialog", "Include hidden files and folders", 0, QApplication::UnicodeUTF8));
        chkCompress->setText(QApplication::translate("Dialog", "Encode duplicate files only once", 0, QApplication::UnicodeUTF8));
        chkLargeSize->setText(QApplication::translate("Dialog", "Ignore maximum image size of 681,984,000 bytes", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        btnStart->setWhatsThis(QApplication::translate("Dialog", "Start creating the iso image", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        btnStart->setText(QApplication::translate("Dialog", "Start", 0, QApplication::UnicodeUTF8));
        btnAbout->setText(QApplication::translate("Dialog", "About", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_WHATSTHIS
        btnExit->setWhatsThis(QApplication::translate("Dialog", "Exit the application", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        btnExit->setText(QApplication::translate("Dialog", "Exit", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
