#ifndef PAGE_LOGIN_H
#define PAGE_LOGIN_H

#include <QWidget>
#include <QSqlDatabase>


namespace Ui {
class Page_login;
}

class Page_login : public QWidget
{
    Q_OBJECT

public:
    explicit Page_login(QWidget *parent = 0);
    ~Page_login();

signals:
    void sendLoginSuccess(QSqlDatabase db);

private slots:
    void on_SignInBtn_clicked();

    void on_pushButton_clicked();

private:
    Ui::Page_login *ui;
};

#endif // PAGE_LOGIN_H
