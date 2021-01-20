#include <QApplication>
#include <QMainWindow>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	QMainWindow *mainWindow = new QMainWindow;
	mainWindow->setWindowTitle("QMainWindow as window");
	mainWindow->resize(300, 50);
	mainWindow->show();

	return app.exec();
}
