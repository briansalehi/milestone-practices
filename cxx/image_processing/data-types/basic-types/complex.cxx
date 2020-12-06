#include <iostream>
#include <opencv2/core/core.hpp>

void show(const std::string& name, const cv::Complexf& complex) {
    std::cout << name << ": ";
    std::cout << complex << std::endl;
}

int main()
{
    // default constructor
    cv::Complexf complexA;

    // member access
    complexA.re = 1;
    complexA.im = 2;
    show("complexA", complexA);

    // copy constructor
    cv::Complexf complexB(complexA);
    show("complexB", complexB);

    // value constructor
    cv::Complexf complexC(1,2);
    show("complexC", complexC);

    // methods
    cv::Complexf conj = complexA.conj();
    std::cout << "conjugate: " << conj << std::endl;

    return 0;
}
