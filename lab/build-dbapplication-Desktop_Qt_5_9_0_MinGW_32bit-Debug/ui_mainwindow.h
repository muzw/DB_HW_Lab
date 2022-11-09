/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *SignInBtn;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *HostName_LE;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *Port_LE;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *DatabaseName_LE;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *UserName_LE;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *Password_lE;
    QPushButton *SignInBtn_2;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QLineEdit *HostName_LE_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_7;
    QLineEdit *Port_LE_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_8;
    QLineEdit *DatabaseName_LE_2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_9;
    QLineEdit *UserName_LE_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_10;
    QLineEdit *Password_lE_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(750, 518);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        SignInBtn = new QPushButton(centralWidget);
        SignInBtn->setObjectName(QStringLiteral("SignInBtn"));
        SignInBtn->setGeometry(QRect(300, 290, 93, 28));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 130, 278, 145));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        HostName_LE = new QLineEdit(layoutWidget);
        HostName_LE->setObjectName(QStringLiteral("HostName_LE"));
        HostName_LE->setClearButtonEnabled(true);

        horizontalLayout->addWidget(HostName_LE);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        Port_LE = new QLineEdit(layoutWidget);
        Port_LE->setObjectName(QStringLiteral("Port_LE"));
        Port_LE->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(Port_LE);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        DatabaseName_LE = new QLineEdit(layoutWidget);
        DatabaseName_LE->setObjectName(QStringLiteral("DatabaseName_LE"));
        DatabaseName_LE->setClearButtonEnabled(true);

        horizontalLayout_3->addWidget(DatabaseName_LE);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        UserName_LE = new QLineEdit(layoutWidget);
        UserName_LE->setObjectName(QStringLiteral("UserName_LE"));
        UserName_LE->setEchoMode(QLineEdit::Normal);
        UserName_LE->setClearButtonEnabled(true);

        horizontalLayout_4->addWidget(UserName_LE);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        Password_lE = new QLineEdit(layoutWidget);
        Password_lE->setObjectName(QStringLiteral("Password_lE"));
        Password_lE->setEchoMode(QLineEdit::Password);
        Password_lE->setClearButtonEnabled(true);

        horizontalLayout_5->addWidget(Password_lE);


        verticalLayout->addLayout(horizontalLayout_5);

        SignInBtn_2 = new QPushButton(centralWidget);
        SignInBtn_2->setObjectName(QStringLiteral("SignInBtn_2"));
        SignInBtn_2->setGeometry(QRect(410, 380, 93, 28));
        layoutWidget_2 = new QWidget(centralWidget);
        layoutWidget_2->setObjectName(QStringLiteral("layoutWidget_2"));
        layoutWidget_2->setGeometry(QRect(230, 220, 278, 145));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_6->addWidget(label_6);

        HostName_LE_2 = new QLineEdit(layoutWidget_2);
        HostName_LE_2->setObjectName(QStringLiteral("HostName_LE_2"));
        HostName_LE_2->setClearButtonEnabled(true);

        horizontalLayout_6->addWidget(HostName_LE_2);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        horizontalLayout_7->addWidget(label_7);

        Port_LE_2 = new QLineEdit(layoutWidget_2);
        Port_LE_2->setObjectName(QStringLiteral("Port_LE_2"));
        Port_LE_2->setClearButtonEnabled(true);

        horizontalLayout_7->addWidget(Port_LE_2);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        label_8 = new QLabel(layoutWidget_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        horizontalLayout_8->addWidget(label_8);

        DatabaseName_LE_2 = new QLineEdit(layoutWidget_2);
        DatabaseName_LE_2->setObjectName(QStringLiteral("DatabaseName_LE_2"));
        DatabaseName_LE_2->setClearButtonEnabled(true);

        horizontalLayout_8->addWidget(DatabaseName_LE_2);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        label_9 = new QLabel(layoutWidget_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        horizontalLayout_9->addWidget(label_9);

        UserName_LE_2 = new QLineEdit(layoutWidget_2);
        UserName_LE_2->setObjectName(QStringLiteral("UserName_LE_2"));
        UserName_LE_2->setEchoMode(QLineEdit::Normal);
        UserName_LE_2->setClearButtonEnabled(true);

        horizontalLayout_9->addWidget(UserName_LE_2);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        label_10 = new QLabel(layoutWidget_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        horizontalLayout_10->addWidget(label_10);

        Password_lE_2 = new QLineEdit(layoutWidget_2);
        Password_lE_2->setObjectName(QStringLiteral("Password_lE_2"));
        Password_lE_2->setEchoMode(QLineEdit::Password);
        Password_lE_2->setClearButtonEnabled(true);

        horizontalLayout_10->addWidget(Password_lE_2);


        verticalLayout_2->addLayout(horizontalLayout_10);

        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        SignInBtn->raise();
        SignInBtn_2->raise();
        layoutWidget_2->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 750, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        SignInBtn->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "HostName", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Port", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "DatabaseNmae", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "UserName", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "Password", Q_NULLPTR));
        SignInBtn_2->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "HostName", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Port", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "DatabaseNmae", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "UserName", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Password", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
