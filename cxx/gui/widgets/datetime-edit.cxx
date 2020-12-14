#include <QApplication>
#include <QDateTimeEdit>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	QDateTimeEdit birthDate;
	
	birthDate.show();
	return app.exec();
}
