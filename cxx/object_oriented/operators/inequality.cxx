#include <iostream>

class Date {
private:
    int day, month, year;

public:
    Date(int d, int m, int y): day{d}, month{m}, year{y} {}

    bool operator< (const Date& pair) {
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
};

int main()
{
    Date today (15,8,2018);
    Date holiday (17,8,2018);

    if (today < holiday) {
        std::cout << "holiday is coming soon!" << std::endl;
    }
    else {
        std::cout << "you missed holiday!" << std::endl;
    }
        
    return 0;
}
