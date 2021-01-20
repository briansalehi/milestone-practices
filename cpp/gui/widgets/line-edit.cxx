#include <QApplication>
#include <QLineEdit>

int main(int argc, char **argv)
{
	QApplication app(argc, argv);

	QLineEdit password;
	password.setPlaceholderText("enter password");
	password.setEchoMode(QLineEdit::Password);
	password.setFixedWidth(200);

	password.show();
	return app.exec();
}
