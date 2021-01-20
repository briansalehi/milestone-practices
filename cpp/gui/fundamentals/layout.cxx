#include <QApplication>
#include <QFormLayout>
#include <QLabel>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QWidget *window = new QWidget;
	window->setWindowTitle("Layout in Application");
	window->resize(250, 20);

	QLabel *text = new QLabel("Widget in a layout");
	text->setAlignment(Qt::AlignCenter);

	QFormLayout *layout = new QFormLayout;
	layout->addWidget(text);

	window->setLayout(layout);

	window->show();
	return app.exec();
}
