#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    bool is_inf = cvIsInf(1.1);
    std::cout << std::boolalpha << is_inf << std::endl;
    return 0;
}
