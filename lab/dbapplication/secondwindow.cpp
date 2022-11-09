#include "secondwindow.h"
#include "ui_secondwindow.h"
#include <QDebug>
#include <QSqlDatabase>

secondwindow::secondwindow(QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::secondwindow)
{
    ui->setupUi(this);


   // QSqlQuery query(db);
   // QSqlQuery* query = new QSqlQuery(&db);

}

secondwindow::~secondwindow()
{
    delete ui;
}

void secondwindow::on_pushButton_clicked()
{

}

void secondwindow::on_executeBtn_clicked()
{
    qDebug() << this->ui->context->toPlainText();
}
