#include <iostream>

class Date {
private:
    int day, month, year;

public:
    Date(int d, int m, int y): day{d}, month{m}, year{y} {}

    Date operator -= (int inday) {
        day -= inday;
        return *this;
    }

    Date operator += (int inday) {
        day += inday;
        return *this;
    }

    void show() {
        std::cout << day << "/" << month << "/" << year << std::endl;
    }
};

int main()
{
    Date today(15,8,2018);
    today.show();
    today += 5;
    today.show();
    
    return 0;
}
