#include "connection.h"

Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("autre.bd");//inserer le nom de la source de données ODBC
db.setUserName("rolo");//inserer nom de l'utilisateur
db.setPassword("rolo");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;

return  test;
}
void Connection::closeconnect()
{db.close();}
