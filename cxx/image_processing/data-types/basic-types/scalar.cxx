#include <iostream>
#include <opencv2/core/core.hpp>

int main()
{
    // default constructor
    cv::Scalar scalar;

    // value constructor
    cv::Scalar vectorA(1,1,1,1);

    // copy constructor
    cv::Scalar vectorB(vectorA);

    // element-wise multiplication
    cv::Scalar multiplied = vectorA.mul(cv::Scalar(2,2,2,2));

    // returns cv::Scalar(s1, -s2, -s3, -s4)
    cv::Scalar conjugated = vectorA.conj();

    // returns true if s1 == s2 == s3 == 0
    bool isreal = vectorA.isReal();

    // conversion operator
    std::cout << "vector A: " << vectorA << std::endl;
    std::cout << "vector A multiplied to cv::Scalar(2,2,2,2) : " << multiplied << std::endl;
    std::cout << "conjugated vector A: " << conjugated << std::endl;
    std::cout << "if vector A is real: " << isreal << std::endl;

    return 0;
}
