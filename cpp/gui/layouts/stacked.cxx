#include <QApplication>
#include <QStackedLayout>
#include <QLabel>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QWidget *window = new QWidget;
	QStackedLayout *layout = new QStackedLayout;

	QLabel *label = new QLabel("stacked layout");
	label->setAlignment(Qt::AlignCenter);

	layout->addWidget(label);

	window->setLayout(layout);
	window->show();
	return app.exec();
}
