#include <QApplication>
#include <QMainWindow>
#include <QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QMainWindow window;
	window.setWindowTitle("Signals and Slots");
	window.resize(250, 50);

	QPushButton *closeButton = new QPushButton("Close");

	QObject::connect(closeButton, SIGNAL(clicked()), &app, SLOT(quit()));

	window.setCentralWidget(closeButton);
	window.show();
	return app.exec();
}
