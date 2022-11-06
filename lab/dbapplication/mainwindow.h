#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <connect_db.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    bool SignIn();

public slots:
    void on_SignInBtn_clicked();

    void on_SignInBtn_clicked(bool checked);

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    Connect_DB  cnect_db;
};

#endif // MAINWINDOW_H
