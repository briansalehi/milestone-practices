#include <iostream>
#include <string>
#include <string_view>

void print(const std::string_view printable)
{
	std::cout << printable << std::endl;
}

int main()
{
	using namespace std::string_view_literals;

	std::string str{"this is a string"};
	auto literal = "this is also a literal"sv;

	print("this is a literal");
	print(str);
	print(literal);

	return 0;
}
