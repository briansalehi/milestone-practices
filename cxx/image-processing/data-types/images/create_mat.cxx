#include <iostream>
#include <opencv2/core/core.hpp>

void details(const cv::Mat& matrix) {
    std::cout << "dimensions: " << matrix.dims << std::endl;
    std::cout << "rows: " << matrix.rows << std::endl;
    std::cout << "columns: " << matrix.cols << std::endl;
    std::cout << std::endl;
}

int main()
{
    cv::Mat empty_matrix;
    empty_matrix.create(3, 10, CV_32FC3);
    empty_matrix.setTo(cv::Scalar(0.1f, 0.0f, 0.1f));
    details(empty_matrix);

    cv::Mat filled_matrix(3, 10, CV_32FC3, cv::Scalar(0.1f, 0.0f, 0.1f));
    details(empty_matrix);
    
    return 0;
}
