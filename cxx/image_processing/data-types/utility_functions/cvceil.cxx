#include <iostream>
#include <opencv2/core/types.hpp>

int main()
{
    int ceil = cvCeil(12.4);
    std::cout << ceil << std::endl;
    return 0;
}
