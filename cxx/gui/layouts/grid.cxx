#include <QApplication>
#include <QGridLayout>
#include <QLineEdit>
#include <QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QWidget *window = new QWidget;

	QLineEdit *email = new QLineEdit;
	email->setPlaceholderText("user@example.com");
	
	QPushButton *submit = new QPushButton("Subscribe");

	QGridLayout *layout = new QGridLayout;
	layout->addWidget(email, 0, 0);
	layout->addWidget(submit, 1, 0);

	window->setLayout(layout);
	window->show();
	return app.exec();
}
