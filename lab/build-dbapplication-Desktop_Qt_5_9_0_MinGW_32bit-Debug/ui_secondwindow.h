/********************************************************************************
** Form generated from reading UI file 'secondwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECONDWINDOW_H
#define UI_SECONDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_secondwindow
{
public:
    QWidget *centralwidget;
    QPlainTextEdit *context;
    QPushButton *executeBtn;
    QMenuBar *menubar;

    void setupUi(QMainWindow *secondwindow)
    {
        if (secondwindow->objectName().isEmpty())
            secondwindow->setObjectName(QStringLiteral("secondwindow"));
        secondwindow->resize(800, 600);
        centralwidget = new QWidget(secondwindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        context = new QPlainTextEdit(centralwidget);
        context->setObjectName(QStringLiteral("context"));
        context->setGeometry(QRect(60, 140, 291, 121));
        executeBtn = new QPushButton(centralwidget);
        executeBtn->setObjectName(QStringLiteral("executeBtn"));
        executeBtn->setGeometry(QRect(450, 210, 93, 28));
        secondwindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(secondwindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        secondwindow->setMenuBar(menubar);

        retranslateUi(secondwindow);

        QMetaObject::connectSlotsByName(secondwindow);
    } // setupUi

    void retranslateUi(QMainWindow *secondwindow)
    {
        secondwindow->setWindowTitle(QApplication::translate("secondwindow", "MainWindow", Q_NULLPTR));
        executeBtn->setText(QApplication::translate("secondwindow", "\346\211\247\350\241\214", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class secondwindow: public Ui_secondwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECONDWINDOW_H
