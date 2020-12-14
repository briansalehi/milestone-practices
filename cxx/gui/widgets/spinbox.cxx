#include <QApplication>
#include <QSpinBox>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	QSpinBox volume;
	volume.setRange(0, 100);

	volume.show();
	return app.exec();
}
