#include <QApplication>
#include <QFormLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QStringList>
#include <QComboBox>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QWidget *window = new QWidget;
	QFormLayout *layout = new QFormLayout;

	QLineEdit *firstname = new QLineEdit;
	QLineEdit *lastname = new QLineEdit;
	QLineEdit *email = new QLineEdit;
	QStringList roleTitles({"Unemployed", "Employed", "Freelance"});
	QComboBox *employment = new QComboBox;
	QPushButton *submit = new QPushButton("Submit");

	firstname->setPlaceholderText("First Name");
	lastname->setPlaceholderText("Last Name");
	email->setPlaceholderText("Email Address");
	employment->addItems(roleTitles);

	layout->addRow("First Name:", firstname);
	layout->addRow("Last Name:", lastname);
	layout->addRow("Email Address:", email);
	layout->addRow("Employment:", employment);
	layout->addWidget(submit);

	window->setLayout(layout);
	window->show();
	return app.exec();
}
