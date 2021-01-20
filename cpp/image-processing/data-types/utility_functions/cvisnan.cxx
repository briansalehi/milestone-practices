#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    bool is_nan = cvIsNaN(1.1);
    std::cout << std::boolalpha << is_nan << std::endl;
    return 0;
}
