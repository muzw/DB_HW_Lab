#ifndef CONNECT_DB_H
#define CONNECT_DB_H
#include <QSqlDatabase>


class Connect_DB
{
private:
    bool connect_state;

public:
    Connect_DB();
    bool state();
    bool SignIn(QSqlDatabase& db);


};

#endif // CONNECT_DB_H
