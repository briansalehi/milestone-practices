#include <iostream>

class Date
{
public:
	Date(int d, int m, int y) : day(d), month(m), year(y) // default constructor
	{
	}

	Date& operator=(Date& copy) // copy assignment operator
	{
		if (this != &copy) {
			day = copy.day;
			month = copy.month;
			year = copy.year;
		}

		return *this;
	}

	Date operator+(int d) // addition operator
	{
		return Date(day + d, month, year);
	}

	void show()
	{
		std::cout << day << "/" << month << "/" << year << std::endl;
	}

private:
	int day, month, year;
};

int main()
{
	Date today(15,4,2020);
	today.show();

	Date tomorrow = today + 1;
	tomorrow.show();

	return 0;
}
