#include <QApplication>
#include <QStringList>
#include <QComboBox>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);
	QStringList roleTitles({"Developer", "Maintainer", "Tester", "User"});

	QComboBox roleComboBox;
	roleComboBox.addItems(roleTitles);

	roleComboBox.show();
	return app.exec();
}
