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
    QWidget *widget;
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
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(120, 130, 278, 145));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        HostName_LE = new QLineEdit(widget);
        HostName_LE->setObjectName(QStringLiteral("HostName_LE"));
        HostName_LE->setClearButtonEnabled(true);

        horizontalLayout->addWidget(HostName_LE);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        Port_LE = new QLineEdit(widget);
        Port_LE->setObjectName(QStringLiteral("Port_LE"));
        Port_LE->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(Port_LE);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        DatabaseName_LE = new QLineEdit(widget);
        DatabaseName_LE->setObjectName(QStringLiteral("DatabaseName_LE"));
        DatabaseName_LE->setClearButtonEnabled(true);

        horizontalLayout_3->addWidget(DatabaseName_LE);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        UserName_LE = new QLineEdit(widget);
        UserName_LE->setObjectName(QStringLiteral("UserName_LE"));
        UserName_LE->setEchoMode(QLineEdit::Normal);
        UserName_LE->setClearButtonEnabled(true);

        horizontalLayout_4->addWidget(UserName_LE);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_5 = new QLabel(widget);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_5->addWidget(label_5);

        Password_lE = new QLineEdit(widget);
        Password_lE->setObjectName(QStringLiteral("Password_lE"));
        Password_lE->setEchoMode(QLineEdit::Password);
        Password_lE->setClearButtonEnabled(true);

        horizontalLayout_5->addWidget(Password_lE);


        verticalLayout->addLayout(horizontalLayout_5);

        MainWindow->setCentralWidget(centralWidget);
        HostName_LE->raise();
        Port_LE->raise();
        DatabaseName_LE->raise();
        UserName_LE->raise();
        Password_lE->raise();
        HostName_LE->raise();
        label->raise();
        label_2->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        SignInBtn->raise();
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
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
