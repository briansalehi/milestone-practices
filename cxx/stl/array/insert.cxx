#include <iostream>
#include <vector>

// use template for type-independency
template <typename T>
void display(const std::vector<T> array) {
    // use auto to reduce code and let compiler deduct the type
    for (auto elem = array.cbegin(); elem != array.cend(); ++elem) {
        std::cout << *elem << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> integers{1,2,3,4,5};
    display(integers);

    // insert an integer in the beginning
    integers.insert(integers.cbegin(), 0);
    display(integers);

    // insert two integers at the end
    integers.insert(integers.cend(), 2, 6);
    display(integers);

    // initialize array with 2 doubles
    std::vector<double> doubles(2, 3.14);
    display(doubles);

    // append another array into doubles
    std::vector<double> another(3, 2.72);
    doubles.insert(doubles.cend(), another.cbegin(), another.cend());
    display(doubles);

    return 0;
}
