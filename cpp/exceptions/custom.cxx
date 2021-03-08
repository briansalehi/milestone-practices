#include <exception>
#include <iostream>
#include <string>

class CustomException : public std::exception {
private:
	std::string description;

public:
    CustomException(const char* reason): description(reason) {}

    virtual const char* what() const throw() {
        return description.c_str();
    }
};

const double divide(const int& dividen, const int& divisor) {
    if (divisor == 0) {
        throw CustomException("dividing by zero is a crime");
	}

    return (dividen / divisor);
}

int main()
{
    try {
		std::cout << divide(1, 0) << std::endl;
    }
    catch (const CustomException& exp) {
		std::cout << "Exception: " << exp.what () << std::endl;
    }

    return 0;
}
