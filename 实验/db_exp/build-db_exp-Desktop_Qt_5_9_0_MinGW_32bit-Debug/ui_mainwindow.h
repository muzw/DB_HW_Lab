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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QPlainTextEdit *SqlText;
    QPushButton *RunBtn;
    QPushButton *CloseBtn;
    QLabel *stateText;
    QLabel *label_2;
    QTableView *tableView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        QIcon icon;
        icon.addFile(QStringLiteral(":/login_icon.jpg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        SqlText = new QPlainTextEdit(centralWidget);
        SqlText->setObjectName(QStringLiteral("SqlText"));

        gridLayout->addWidget(SqlText, 1, 0, 2, 1);

        RunBtn = new QPushButton(centralWidget);
        RunBtn->setObjectName(QStringLiteral("RunBtn"));

        gridLayout->addWidget(RunBtn, 1, 1, 1, 1);

        CloseBtn = new QPushButton(centralWidget);
        CloseBtn->setObjectName(QStringLiteral("CloseBtn"));

        gridLayout->addWidget(CloseBtn, 2, 1, 1, 1);

        stateText = new QLabel(centralWidget);
        stateText->setObjectName(QStringLiteral("stateText"));

        gridLayout->addWidget(stateText, 3, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 4, 0, 1, 1);

        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));

        gridLayout->addWidget(tableView, 5, 0, 1, 2);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 26));
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\346\225\260\346\215\256\345\272\223\346\223\215\344\275\234", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "SQL\350\257\255\345\217\245\350\276\223\345\205\245\346\241\206", Q_NULLPTR));
        RunBtn->setText(QApplication::translate("MainWindow", "\346\211\247\350\241\214", Q_NULLPTR));
        CloseBtn->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        stateText->setText(QApplication::translate("MainWindow", "\347\212\266\346\200\201\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242\347\273\223\346\236\234\357\274\232", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
