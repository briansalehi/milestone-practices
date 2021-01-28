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
		qDebug() << "";
	}

	QSqlQuery statement("select * from contacts", connection);
	QSqlRecord record = statement.record();

	while (statement.next()) {
		QString id = statement.value(record.indexOf("id")).toString();
		QString firstname = statement.value(record.indexOf("firstname")).toString();
		QString lastname = statement.value(record.indexOf("lastname")).toString();
		qDebug() << id << " - " << firstname << " - " << lastname;
	}
}
