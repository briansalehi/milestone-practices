#include <QApplication>
#include <QGridLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QWidget *window = new QWidget;
	QGridLayout *layout = new QGridLayout;

	QLabel *firstnameLabel = new QLabel("First Name:");
	QLabel *lastnameLabel = new QLabel("Last Name:");
	QLabel *emailLabel = new QLabel("Email:");
	QLineEdit *firstname = new QLineEdit;
	QLineEdit *lastname = new QLineEdit;
	QLineEdit *email = new QLineEdit;
	QPushButton *submit = new QPushButton("Submit");
	
	firstname->setPlaceholderText("first name");
	lastname->setPlaceholderText("last name");
	email->setPlaceholderText("user@example.com");

	layout->addWidget(firstnameLabel, 0, 0);
	layout->addWidget(firstname, 0, 1);
	layout->addWidget(lastnameLabel, 1, 0);
	layout->addWidget(lastname, 1, 1);
	layout->addWidget(emailLabel, 2, 0);
	layout->addWidget(email, 2, 1);
	layout->addWidget(submit, 3, 0);

	window->setLayout(layout);
	window->show();
	return app.exec();
}
