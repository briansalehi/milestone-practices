#include <iostream>
#include <cstring>

int main()
{
	// writing to stream using stream out operator <<
	std::cout << "first line of stream" << std::endl;

	// writing string using raw method
	char const* string = "raw method of output stream\n";
	std::cout.write(string, strlen(string));

	// writing character to stream
	std::cout.put('a');
	std::cout << std::endl;

	// checking for availability of output stream
	// will return false in case of eof
	if (std::cout.good())
		std::cout << "output stream is ready" << std::endl;

	// check for fatal errors
	// eof is not fatal
	if (!std::cout.bad())
		std::cout << "output stream not in a bad condition" << std::endl;

	// check for failure
	// eof is not a failure
	if (!std::cout.fail())
		std::cout << "no failure in output stream" << std::endl;

	// the boolean operator of cout is the same as !std::cout.fail()
	if (!std::cout)
		std::cout << "same as above line" << std::endl;

	// cout can be set to throw exceptions
	std::cout.exceptions(std::ios_base::badbit|std::ios_base::failbit|std::ios_base::eofbit);
	try {
		std::cout << "stream will throw in failure" << std::endl;
	} catch (const std::ios_base::failure& exp) {
		std::cerr << exp.what() << std::endl;
	}

	// force output stream to flush
	std::cout.flush();

	return 0;
}
