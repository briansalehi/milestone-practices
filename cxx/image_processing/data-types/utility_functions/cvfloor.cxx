#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    int floor = cvFloor(12.4);
    std::cout << floor << std::endl;
    return 0;
}
