#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
	QApplication app(argc, arv);

	QPushButton *closeButton = new QPushButton;

	layout->addWidget(closeButton);

	connect(closeButton, SIGNAL(clicked()), &app, SLOT(exit()));

	closeButton->show();
	return app.exec();
}
