#include <iostream>
#include <string>
#include <string_view>

void display(const std::string_view& message)
{
	std::cout << message << std::endl;
}

int main()
{
	// to use ""s and ""sv literal operator
	using namespace std::string_literals;
	using namespace std::string_view_literals;

	display("this is a literal");
	display("this is a string"s); // notice the ""s literal operator
	display("this is a string_view"sv); // note the ""sv literal operator

	return 0;
}
