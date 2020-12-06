#include <iostream>

class Date {
private:
    int day, month, year;

public:
    Date(int d, int m, int y): day{d}, month{m}, year{y} {}

    bool operator == (const Date& pair) {
        return (day == pair.day && month == pair.month && year == pair.year);
    }

    bool operator != (const Date& pair) {
        return !(this->operator== (pair));
    }
};

int main()
{
    Date today(17,8,2018);
    Date holiday(17,8,2018);

    if (today == holiday) {
        std::cout << "today is holiday!" << std::endl;
    }
    else {
        std::cout << "today we have a lot of work to do" << std::endl;
    }
        
    return 0;
}
