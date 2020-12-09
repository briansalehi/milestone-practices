#include <QApplication>
#include <QString>
#include <QLabel>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QString text("This is a simple Qt application");
	QLabel label(text);
	label.setFont(QFont("Free Sans", 12));
	label.setAlignment(Qt::AlignCenter);
	label.show();
	return app.exec();
}
