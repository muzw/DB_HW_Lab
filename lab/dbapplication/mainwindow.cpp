#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::SignIn()
{

    this->db = QSqlDatabase::addDatabase("QODBC");
    this->db.setHostName(this->ui->HostName_LE->text());
    this->db.setPort(this->ui->Port_LE->text().toInt());
    this->db.setDatabaseName(this->ui->DatabaseName_LE->text());
    this->db.setUserName(this->ui->UserName_LE->text());
    this->db.setPassword(this->ui->Password_lE->text());
    bool ok = db.open();
    if (ok)
    {
        QMessageBox::information(this, "infor", "success");
    }
    else
    {
        QMessageBox::information(this, "infor", "open failed");
    }
}
void MainWindow::on_SignInBtn_clicked(bool checked)
{
    this->SignIn();
}
