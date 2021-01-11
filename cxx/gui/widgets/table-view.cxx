#include <QApplication>
#include <QVBoxLayout>
#include <QTableView>
#include <QHeaderView>
#include <QDate>
#include <QDateEdit>
#include <QString>
#include <QMessageBox>
#include <QStandardItemModel>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QWidget *window = new QWidget;
	window->setWindowTitle("Table Sample");
	window->resize(400, 200);
	QVBoxLayout *layout = new QVBoxLayout;

	QTableView *table = new QTableView;
	QStandardItemModel *model = new QStandardItemModel(1, 3, window);

	table->setContextMenuPolicy(Qt::CustomContextMenu);
	table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	model->setHorizontalHeaderItem(0, new QStandardItem(QString("Name")));
	model->setHorizontalHeaderItem(1, new QStandardItem(QString("Date of Birth")));
	model->setHorizontalHeaderItem(2, new QStandardItem(QString("Phone Number")));
	table->setModel(model);

	QStandardItem *firstItem = new QStandardItem(QString("Jane Doe"));
	QDate birthdate(1990, 1, 1);
	QStandardItem *secondItem = new QStandardItem(birthdate.toString());
	QStandardItem *thirdItem = new QStandardItem(QString("0123456789"));

	model->setItem(0, 0, firstItem);
	model->setItem(0, 1, secondItem);
	model->setItem(0, 2, thirdItem);

	layout->addWidget(table);
	window->setLayout(layout);
	window->show();
	return app.exec();
}
