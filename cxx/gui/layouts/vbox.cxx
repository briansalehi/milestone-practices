#include <QApplication>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QWidget *window = new QWidget;
	QVBoxLayout *layout = new QVBoxLayout;

	QLineEdit *firstname = new QLineEdit;
	QLineEdit *lastname = new QLineEdit;
	QPushButton *submit = new QPushButton("Submit");

	firstname->setPlaceholderText("first name");
	lastname->setPlaceholderText("last name");

	layout->addWidget(firstname);
	layout->addWidget(lastname);
	layout->addWidget(submit);

	window->setLayout(layout);
	window->show();
	return app.exec();
}
