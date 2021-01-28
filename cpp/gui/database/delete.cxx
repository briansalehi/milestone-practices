#include <QtSql>
#include <QDebug>
#include <QString>

int main()
{
	QSqlDatabase connection = QSqlDatabase::addDatabase("QMYSQL", "connection-name");
	connection.setHostName("127.0.0.1");
	connection.setDatabaseName("milestone_samples");
	connection.setUserName("milestone");
	connection.setPassword("1234");
	connection.setPort(3306);

	if (!connection.open()) {
		qDebug() << connection.lastError();
		return 1;
	} else {
		qDebug() << "Database connection established!";
	}

	QSqlQuery statement(connection);
	statement.exec("delete from contacts where id > 2");
	qDebug() << "Number of rows affected:" << statement.numRowsAffected();
}
