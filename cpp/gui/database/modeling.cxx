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

	// SELECT in table model
	QSqlTableModel *contactsTableModel = new QSqlTableModel(0, connection);
	contactsTableModel->setTable("contacts");
	contactsTableModel->select();

	for (int i = 0; i < contactsTableModel->rowCount(); ++i) {
		QSqlRecord record = contactsTableModel->record(i);
		QString id = record.value("id").toString();
		QString firstname = record.value("firstname").toString();
		QString lastname = record.value("lastname").toString();
		qDebug() << id << " - " << firstname << " - " << lastname;
	}

	// INSERT in table model
	int row = contactsTableModel->rowCount();
	contactsTableModel->insertRows(row, 1);
	contactsTableModel->setData(contactsTableModel->index(row, 1), "Johnny");
	contactsTableModel->setData(contactsTableModel->index(row, 2), "Gehller");
	contactsTableModel->submitAll();

	contactsTableModel->setFilter("id > 2");
	contactsTableModel->select();

	qDebug() << "";
	for (int i = 0; i < contactsTableModel->rowCount(); ++i) {
		QSqlRecord record = contactsTableModel->record(i);
		QString id = record.value("id").toString();
		QString firstname = record.value("firstname").toString();
		QString lastname = record.value("lastname").toString();
		qDebug() << id << " - " << firstname << " - " << lastname;
	}
}
