#include <QApplication>
#include <QMainWindow>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	auto *window = new QMainWindow;
	window->setWindowTitle("QMainWindow as window");
	window->resize(300, 50);
	window->show();

	return app.exec();
}
