#include <QtSql>
#include <QDebug>

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
	statement.exec("update contacts set firstname = 'Jessica' where id = 1");
	qDebug() << "Number of rows affected:" << statement.numRowsAffected();
	statement.exec("update contacts set firstname = 'Jane' where id = 1");
	qDebug() << "Number of rows affected:" << statement.numRowsAffected();
}
