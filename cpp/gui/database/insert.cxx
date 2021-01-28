#include <QtSql>
#include <QDebug>
#include <QString>

// function declarations
void insert_by_add(QSqlDatabase &);
void insert_by_index(QSqlDatabase &);
void insert_by_placeholder(QSqlDatabase &);
void query(QSqlDatabase &);

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

	insert_by_add(connection);
	insert_by_index(connection);
	insert_by_placeholder(connection);
	query(connection);
}

// function definitions
void insert_by_add(QSqlDatabase &connection)
{
	QSqlQuery statement(connection);
	statement.prepare("insert into contacts (firstname, lastname) values (?, ?)");
	statement.addBindValue("Jack");
	statement.addBindValue("Conor");
	statement.exec();
}

void insert_by_index(QSqlDatabase &connection)
{
	QSqlQuery statement(connection);
	statement.prepare("insert into contacts (firstname, lastname) values (?, ?)");
	statement.bindValue(0, "David");
	statement.bindValue(1, "Hall");
	statement.exec();
}

void insert_by_placeholder(QSqlDatabase &connection)
{
	QSqlQuery statement(connection);
	statement.prepare("insert into contacts (firstname, lastname) values (:firstname, :lastname)");
	statement.bindValue(":firstname", "Misha");
	statement.bindValue(":lastname", "Clay");
	statement.exec();
}

void query(QSqlDatabase &connection)
{
	QSqlQuery statement("select * from contacts", connection);
	QSqlRecord record = statement.record();

	while (statement.next()) {
		QString id = statement.value(record.indexOf("id")).toString();
		QString firstname = statement.value(record.indexOf("firstname")).toString();
		QString lastname = statement.value(record.indexOf("lastname")).toString();
		qDebug() << id << " - " << firstname << " - " << lastname;
	}
}
