#include <QApplication>
#include <QHBoxLayout>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QWidget *window = new QWidget;
	QHBoxLayout *layout = new QHBoxLayout;

	QLabel *label = new QLabel("Email:");
	QLineEdit *email = new QLineEdit;
	email->setPlaceholderText("user@example.com");
	QPushButton *submit = new QPushButton("Submit");

	layout->addWidget(label);
	layout->addWidget(email);
	layout->addWidget(submit);

	window->setLayout(layout);
	window->show();
	return app.exec();
}
