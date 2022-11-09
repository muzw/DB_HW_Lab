#include "page_login.h"
#include "ui_page_login.h"
#include <QMessageBox>

Page_login::Page_login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Page_login)
{
    ui->setupUi(this);
}

Page_login::~Page_login()
{
    delete ui;
}

void Page_login::on_SignInBtn_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
    db.setHostName("202.38.69.70");
    db.setPort(5432);
    db.setDatabaseName("opengaussdb");
    db.setUserName("student");
    db.setPassword("Student123");
//    db.setHostName(this->ui->HostName_LE->text());
//    db.setPort(this->ui->Port_LE->text().toInt());
//    db.setDatabaseName(this->ui->DatabaseName_LE->text());
//    db.setUserName(this->ui->UserName_LE->text());
//    db.setPassword(this->ui->Password_lE->text());
    bool ok = db.open();
    if (ok)
    {
        QMessageBox::information(this, "infor", "success");
        emit sendLoginSuccess(db);
    }
    else
    {
        QMessageBox::information(this, "infor", "open failed");
    }
}

void Page_login::on_pushButton_clicked()
{
    exit(1);
}
