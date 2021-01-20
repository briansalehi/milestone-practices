#include <QApplication>
#include <QDial>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	QDial *volumeDial = new QDial;
	volumeDial->setMinimum(0);
	volumeDial->setMaximum(100);
	volumeDial->setNotchesVisible(true);

	volumeDial->show();
	return app.exec();
}
