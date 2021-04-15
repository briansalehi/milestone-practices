#include <iostream>

class Date
{
public:
    Date(int d, int m, int y): day(d), month(m), year(y) // default constructor
	{
	}

    bool operator< (const Date& pair)
	{
        if (year < pair.year) {
            return true;
        }
        else if (month < pair.month) {
            return true;
        }
        else if (day < pair.day) {
            return true;
        }
        else {
            return false;
        }
    }

private:
    int day, month, year;
};

int main()
{
    Date today (15,8,2018);
    Date holiday (17,8,2018);

    if (today < holiday) {
        std::cout << "Holiday is coming soon!" << std::endl;
    }
    else {
        std::cout << "You missed holiday!" << std::endl;
    }
        
    return 0;
}
