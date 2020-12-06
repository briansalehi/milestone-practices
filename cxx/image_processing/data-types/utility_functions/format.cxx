#include <iostream>
#include <string>
#include <opencv2/core/core.hpp>

int main()
{
    std::string message = cv::format("this is a %d characters length message", 38);
    std::cout << message << std::endl;
    return 0;
}
