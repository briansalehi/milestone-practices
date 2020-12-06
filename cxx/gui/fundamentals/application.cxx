#include <QApplication>
#include <QLabel>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QLabel label("Qt Application");
	label.show();
	return app.exec();
}
