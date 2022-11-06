#include "connect_db.h"
#include <QSqlDatabase>

Connect_DB::Connect_DB()
{

}

bool Connect_DB::state()
{
    return this->connect_state;
}

bool Connect_DB::SignIn(QSqlDatabase& db)
{
        db = QSqlDatabase::addDatabase("QODBC");
        db.setHostName("202.38.69.70");
        db.setPort(5432);
        db.setDatabaseName("opengaussdb");
        db.setUserName("student");
        db.setPassword("Student123");
//        bool ok = db.open();
//        if (ok){
//            QMessageBox::information(this, "infor", "success");
//        }
//        else {
//            QMessageBox::information(this, "infor", "open failed");
//        }

}


