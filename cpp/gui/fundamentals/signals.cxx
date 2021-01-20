#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QWidget *window = new QWidget;
	window->setWindowTitle("Signals and Slots");
	window->resize(250, 50);

	QPushButton *closeButton = new QPushButton;

	QObject::connect(closeButton, SIGNAL(clicked()), &app, SLOT(exit()));

	window->show();
	return app.exec();
}
