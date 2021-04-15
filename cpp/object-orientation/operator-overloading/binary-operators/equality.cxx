#include <iostream>

class Date
{
public:
    Date(int d, int m, int y): day(d), month(m), year(y) // default constructor
	{
	}

    bool operator==(const Date& pair) // equality operator
	{
        return (day == pair.day && month == pair.month && year == pair.year);
    }

	bool operator!=(const Date& pair) // inequality operator
	{
		return ! this->operator==(pair);
	}

private:
    int day, month, year;
};

int main()
{
    Date today(17,8,2018);
    Date holiday(17,8,2018);

    if (today == holiday) {
        std::cout << "Today is holiday!" << std::endl;
    }
    else {
        std::cout << "Today we have a lot of work to do!" << std::endl;
    }
        
    return 0;
}
