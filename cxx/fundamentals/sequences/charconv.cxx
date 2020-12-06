#include <iostream>
#include <string>
#include <charconv>

int main()
{
	std::string number(10, ' ');

	/**
	 * arguments:
	 * to_chars(char* first, char* last, IntegerT value, int base = 10)
	 *
	 * returns:
	 * sturct to_chars_result { char *ptr; errc ec; }
	 * see structured bindings for more info
	 */
	auto [ptr, err] = std::to_chars(number.data(), number.data() + number.size(), 12345);
	if (err == std::errc())
		std::cout << number << std::endl;

	/**
	 * arguments:
	 * to_chars(char* first, char* last, FloatT value, chars_format format, int precision)
	 *
	 * format:
	 * enum class chars_format { scientific, fixed, hex, general = fixed | scientific ) }
	 *
	 * returns:
	 * sturct to_chars_result { char *ptr; errc ec; }
	 */
	std::string fraction(10, ' ');
	std::to_chars_result result = std::to_chars(fraction.data(), fraction.data() + fraction.size(), 3141592);
	if (result.ec == std::errc())
		std::cout << fraction << std::endl;

	/**
	 * arguments:
	 * from_chars(const char* first, const char* last, IntegerT& value, int base = 10)
	 * 
	 * returns:
	 * struct from_chars_result { const char* ptr; errc ec; }
	 */
	int integer;
	std::string raw{"12345"};
	std::from_chars_result int_result = std::from_chars(raw.data(), raw.data() + raw.size(), integer);
	if (int_result.ec == std::errc())
		std::cout << integer << std::endl;

	return 0;
}
