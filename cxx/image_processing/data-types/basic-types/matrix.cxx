#include <iostream>
#include <opencv2/core/core.hpp>

/*
    All possible (dimensions x types) combinations of fixed matrix, matx classes:
    Matx{1,...,6}{1,...,6}{f,d}
*/

template <typename Matrix>
void show(const std::string& name, const Matrix& matrix) {
    std::cout << std::endl;
    std::cout << name << std::endl;
    std::cout << matrix << std::endl;
}

int main()
{
    // default constructor
    cv::Matx22f matrix;
    show<cv::Matx22f>("matrix", matrix);

    // copy constructor
    cv::Matx22f copy(matrix);
    show<cv::Matx22f>("copy", copy);

    // value constructor
    cv::Matx22f matA(1,2,3,4);
    show<cv::Matx22f>("matA", matA);

    // methods
    cv::Matx22d all = cv::Matx22d::all(2);
    show<cv::Matx22d>("all", all);

    cv::Matx22d zeros = cv::Matx22d::zeros();
    show<cv::Matx22d>("zeros", zeros);

    cv::Matx22d ones = cv::Matx22d::ones();
    show<cv::Matx22d>("ones", ones);

    cv::Matx22d eye = cv::Matx22d::eye();
    show<cv::Matx22d>("eye", eye);

    show<cv::Matx22f>("matA", matA);
    cv::Matx22f transpose = matA.t();
    show<cv::Matx22f>("transposed matA", transpose);

    cv::Matx12f row = matA.row(1);
    show<cv::Matx12f>("first row of matA", row);

    cv::Matx21f diagonal = matA.diag();
    show<cv::Matx21f>("diagonal of matA", diagonal);

    cv::Matx22f inverted = matA.inv();
    show<cv::Matx22f>("inverted matA", inverted);

    return 0;
}
