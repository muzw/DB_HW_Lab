/********************************************************************************
** Form generated from reading UI file 'page_login.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGE_LOGIN_H
#define UI_PAGE_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Page_login
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLineEdit *HostName_LE;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QLineEdit *Port_LE;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *DatabaseName_LE;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_5;
    QLineEdit *UserName_LE;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_6;
    QLineEdit *Password_lE;
    QPushButton *pushButton;
    QPushButton *SignInBtn;
    QLabel *label;

    void setupUi(QWidget *Page_login)
    {
        if (Page_login->objectName().isEmpty())
            Page_login->setObjectName(QStringLiteral("Page_login"));
        Page_login->resize(464, 325);
        QIcon icon;
        icon.addFile(QStringLiteral(":/login_icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        Page_login->setWindowIcon(icon);
        gridLayout = new QGridLayout(Page_login);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_2 = new QLabel(Page_login);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        HostName_LE = new QLineEdit(Page_login);
        HostName_LE->setObjectName(QStringLiteral("HostName_LE"));
        HostName_LE->setClearButtonEnabled(true);

        horizontalLayout->addWidget(HostName_LE);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_3 = new QLabel(Page_login);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_2->addWidget(label_3);

        Port_LE = new QLineEdit(Page_login);
        Port_LE->setObjectName(QStringLiteral("Port_LE"));
        Port_LE->setClearButtonEnabled(true);

        horizontalLayout_2->addWidget(Port_LE);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_4 = new QLabel(Page_login);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_3->addWidget(label_4);

        DatabaseName_LE = new QLineEdit(Page_login);
        DatabaseName_LE->setObjectName(QStringLiteral("DatabaseName_LE"));
        DatabaseName_LE->setClearButtonEnabled(true);

        horizontalLayout_3->addWidget(DatabaseName_LE);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_5 = new QLabel(Page_login);
        label_5->setObjectName(QStringLiteral("label_5"));

        horizontalLayout_4->addWidget(label_5);

        UserName_LE = new QLineEdit(Page_login);
        UserName_LE->setObjectName(QStringLiteral("UserName_LE"));
        UserName_LE->setEchoMode(QLineEdit::Normal);
        UserName_LE->setClearButtonEnabled(true);

        horizontalLayout_4->addWidget(UserName_LE);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        label_6 = new QLabel(Page_login);
        label_6->setObjectName(QStringLiteral("label_6"));

        horizontalLayout_5->addWidget(label_6);

        Password_lE = new QLineEdit(Page_login);
        Password_lE->setObjectName(QStringLiteral("Password_lE"));
        Password_lE->setEchoMode(QLineEdit::Password);
        Password_lE->setClearButtonEnabled(true);

        horizontalLayout_5->addWidget(Password_lE);


        verticalLayout->addLayout(horizontalLayout_5);


        gridLayout->addLayout(verticalLayout, 1, 0, 1, 2);

        pushButton = new QPushButton(Page_login);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        gridLayout->addWidget(pushButton, 2, 0, 1, 1);

        SignInBtn = new QPushButton(Page_login);
        SignInBtn->setObjectName(QStringLiteral("SignInBtn"));

        gridLayout->addWidget(SignInBtn, 2, 1, 1, 1);

        label = new QLabel(Page_login);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(25);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 2);

        SignInBtn->raise();
        pushButton->raise();
        label->raise();

        retranslateUi(Page_login);

        QMetaObject::connectSlotsByName(Page_login);
    } // setupUi

    void retranslateUi(QWidget *Page_login)
    {
        Page_login->setWindowTitle(QApplication::translate("Page_login", "\346\225\260\346\215\256\345\272\223\347\231\273\345\275\225", Q_NULLPTR));
        label_2->setText(QApplication::translate("Page_login", "HostName", Q_NULLPTR));
        label_3->setText(QApplication::translate("Page_login", "Port", Q_NULLPTR));
        label_4->setText(QApplication::translate("Page_login", "DatabaseNmae", Q_NULLPTR));
        label_5->setText(QApplication::translate("Page_login", "UserName", Q_NULLPTR));
        label_6->setText(QApplication::translate("Page_login", "Password", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Page_login", "\351\200\200\345\207\272", Q_NULLPTR));
        SignInBtn->setText(QApplication::translate("Page_login", "\347\231\273\345\275\225", Q_NULLPTR));
        label->setText(QApplication::translate("Page_login", "\346\225\260\346\215\256\345\272\223\347\231\273\345\275\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Page_login: public Ui_Page_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGE_LOGIN_H
