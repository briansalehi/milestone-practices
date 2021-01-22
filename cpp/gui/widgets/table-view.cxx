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

	model->setHorizontalHeaderItem(0, new QStandardItem(QString("Name")));
	model->setHorizontalHeaderItem(1, new QStandardItem(QString("Date of Birth")));
	model->setHorizontalHeaderItem(2, new QStandardItem(QString("Phone Number")));

	model->setItem(0, 0, new QStandardItem(QString("Jane Doe")));
	model->setItem(0, 1, new QStandardItem(QDate(1990, 1, 1).toString()));
	model->setItem(0, 2, new QStandardItem(QString("123")));

	table->setContextMenuPolicy(Qt::CustomContextMenu);
	table->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
	table->setModel(model);

	layout->addWidget(table);
	window->setLayout(layout);
	window->show();
	return app.exec();
}
