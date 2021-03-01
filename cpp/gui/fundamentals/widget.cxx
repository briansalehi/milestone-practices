#include <QApplication>
#include <QWidget>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	QWidget *window = new QWidget;
	window->setWindowTitle("Widget as Window");
	window->resize(250, 150);
	window->show();

	return app.exec();
}
