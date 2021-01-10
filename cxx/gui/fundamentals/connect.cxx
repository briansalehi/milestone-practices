#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	QPushButton *closeButton = new QPushButton;

	QObject::connect(closeButton, SIGNAL(clicked()), &app, SLOT(exit()));

	closeButton->show();
	return app.exec();
}
