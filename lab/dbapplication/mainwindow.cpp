#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("202.38.69.70");
    db.setPort(5432);
    db.setDatabaseName("opengaussdb");
    db.setUserName("student");
    db.setPassword("Student123");
    bool ok = db.open();
    if (ok){
        QMessageBox::information(this, "infor", "success");
    }
    else {
        QMessageBox::information(this, "infor", "open failed");
    }



}

MainWindow::~MainWindow()
{
    delete ui;
}
