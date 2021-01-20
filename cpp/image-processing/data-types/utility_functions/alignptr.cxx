#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    try {
    int* pointer = new int(3);
    std::cout << std::hex << pointer << std::endl;

    int* aligned_pointer = cv::alignPtr<int>(pointer, sizeof(*pointer));
    std::cout << std::hex << aligned_pointer << std::endl;

    if (pointer != nullptr) {
        delete pointer;
    }
    } // try
    catch (std::exception& exp) {
        std::cout << exp.what() << std::endl;
    }
    return 0;
}
