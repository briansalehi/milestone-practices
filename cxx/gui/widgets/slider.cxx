#include <QApplication>
#include <QSlider>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QSlider *slider = new QSlider;

	slider->setTickPosition(QSlider::TicksAbove);
	slider->setTickInterval(10);
	slider->setSingleStep(1);
	slider->setMinimum(0);
	slider->setMaximum(100);

	slider->show();
	return app.exec();
}
