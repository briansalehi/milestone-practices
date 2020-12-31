#include <iostream>
#include <opencv2/core/core.hpp>

struct base {
public:
    base() = default;
    base(const int& A, const double& B): memberA{A}, memberB{B} {};
    ~base() = default;
private:
    int memberA;
    double memberB;
};

int main()
{
    base object(1,2);
    base* array = new base[4]{object, object, object, object};
    size_t align_size = cv::alignSize(sizeof(array), sizeof(object));

    std::cout << "size of buffer: " << sizeof(array) << std::endl;
    std::cout << "size of type: " << sizeof(object) << std::endl;
    std::cout << "align size: " << align_size << std::endl;
    size_t bs = sizeof(array);
    int n = sizeof(object);
    std::cout << "computed align size: " << ((bs + n-1) & -n) << std::endl;

    delete [] array;
    return 0;
} 
