#include <iostream>
#include <opencv2/core/core.hpp>

template <typename Vector>
void show(const std::string& name, const Vector& vector) {
    std::cout << name << std::endl;
    std::cout << vector << std::endl;
    std::cout << std::endl;
}

int main()
{
    // default constructor
    cv::Vec3i vecA;
    show<cv::Vec3i>("vecA", vecA);

    // value constructor
    vecA = cv::Vec3i(2,1,0);
    show<cv::Vec3i>("vecA after value assignment", vecA);

    cv::Vec3i vecB(1,2,0);
    show<cv::Vec3i>("vecB", vecB);

    // member access
    int element = vecB[0];
    std::cout << "first element: " << element << std::endl;

    // methods
    cv::Vec3i cross = vecA.cross(vecB);
    std::cout << "cross section of A to B: " << cross << std::endl;

    return 0;
}
