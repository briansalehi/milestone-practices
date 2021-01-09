#include <QApplication>
#include <QMainWindow>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QMainWindow *mainWindow = new QMainWindow;

	mainWindow->show();
	return app.exec();
}
