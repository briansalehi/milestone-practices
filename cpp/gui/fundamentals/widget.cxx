#include <QApplication>
#include <QVBoxLayout>
#include <QLabel>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QWidget *window = new QWidget;
	QVBoxLayout *layout = new QVBoxLayout;

	QLabel *label = new QLabel("Sample Qt Application");

	layout->addWidget(label);
	window->setLayout(layout);
	window->show();
	return app.exec();
}
