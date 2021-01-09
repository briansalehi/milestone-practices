#include <QApplication>
#include <QLCDNumber>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QLCDNumber *lcd = new QLCDNumber;

	lcd->setPalette(Qt::green);

	lcd->show();
	return app.exec();
}
