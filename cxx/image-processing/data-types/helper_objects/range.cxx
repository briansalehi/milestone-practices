#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    cv::Range range(0,5);
    std::cout << "range: " << range << std::endl;
    std::cout << "start: " << range.start << std::endl;
    std::cout << "end: " << range.end << std::endl;
    std::cout << "size: " << range.size() << std::endl;
    std::cout << std::boolalpha << "if empty: " << range.empty() << std::endl;
    return 0;
}
