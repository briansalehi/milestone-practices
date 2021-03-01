#include <QApplication>
#include <QLabel>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QLabel label("This is a Qt application!");
	label.show();
	return app.exec();
}
