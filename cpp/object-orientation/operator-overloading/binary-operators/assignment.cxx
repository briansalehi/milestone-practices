#include <iostream>

class Date
{
public:
    Date(int d, int m, int y): day(d), month(m), year(y) // overloaded constructor
	{
	}

	Date& operator=(Date& copy) // copy asignment operator
	{
		if (this != &copy) {
			day = copy.day;
			month = copy.month;
			year = copy.year;
		}

		return *this;
	}

    Date operator-=(int inday) // subtraction/assignment operator
	{
        day -= inday;
        return *this;
    }

    Date operator+=(int inday) // addition/assignment operator
	{
        day += inday;
        return *this;
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

    today += 1;
	Date tomorrow = today;
	tomorrow.show();

	today -= 1;
	today.show();
    
    return 0;
}
