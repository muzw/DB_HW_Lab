#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <page_login.h>
#include <QSqlDatabase>
#include <QSqlQueryModel>
#include <QTableView>
#include <QSqlQuery>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_CloseBtn_clicked();

    void on_RunBtn_clicked();

private:
    Ui::MainWindow *ui;

    Page_login dlgLogin;

    QSqlDatabase db;

};

#endif // MAINWINDOW_H
