#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    dlgLogin.show();

    auto f = [&](QSqlDatabase db){
      this->show();
      this->db = db;
      dlgLogin.hide();

    };
    connect(&dlgLogin,&Page_login::sendLoginSuccess,this,f);

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_CloseBtn_clicked()
{
    exit(0);
}

void MainWindow::on_RunBtn_clicked()
{
    QSqlQueryModel* model = new QSqlQueryModel(this);       //数据库查询模型

    QString query = ui->SqlText->toPlainText();

    QSqlQuery sql_query(db);

    if(sql_query.exec(query))
    {
        model->setQuery(sql_query);
        ui->tableView->reset();
        ui->tableView->setModel(model);         //为TableView显示设定数据模型
        ui->stateText->setText("状态:成功");

    }
    else
    {
        ui->stateText->setText("状态:出错");
    }



}
