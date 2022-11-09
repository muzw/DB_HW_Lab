#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlDatabase>
#include <QMessageBox>
#include <QDebug>
#include <QSqlQuery>

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
    db.setHostName("202.38.69.70");
    db.setPort(5432);
    db.setDatabaseName("opengaussdb");
    db.setUserName("student");
    db.setPassword("Student123");
//    this->db.setHostName(this->ui->HostName_LE->text());
//    this->db.setPort(this->ui->Port_LE->text().toInt());
//    this->db.setDatabaseName(this->ui->DatabaseName_LE->text());
//    this->db.setUserName(this->ui->UserName_LE->text());
//    this->db.setPassword(this->ui->Password_lE->text());
    bool ok = db.open();
    if (ok)
    {
        QMessageBox::information(this, "infor", "success");
        return true;
    }
    else
    {
        QMessageBox::information(this, "infor", "open failed");
        return false;
    }
    QSqlQuery query(db);
    QString q = "select * from sc;";
    query.exec(q);
    qDebug() << query.size();
    while(query.next())
    {
        //query.
    }



}
void MainWindow::on_SignInBtn_clicked(bool checked)
{
    if(this->SignIn())
    {
        //this->close();
        //secondwindow* secwindow = new secondwindow(this);
        //secwindow->show();
    }
}

void MainWindow::on_SignInBtn_clicked()
{

}
