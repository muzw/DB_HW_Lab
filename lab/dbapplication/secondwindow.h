#ifndef SECONDWINDOW_H
#define SECONDWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>

namespace Ui {
class secondwindow;
}

class secondwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit secondwindow(QWidget *parent = 0);
    ~secondwindow();

public slots:
    void on_pushButton_clicked();

private slots:
    void on_executeBtn_clicked();

private:
    Ui::secondwindow *ui;
};

#endif // SECONDWINDOW_H
