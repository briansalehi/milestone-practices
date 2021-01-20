#include <QString>

int main()
{
	// QString is not a widget so we cannot call show method here
	// Use QString just as a regular C++ std::string container
	QString text("Just another widget in Qt framework");
	return 0;
}
