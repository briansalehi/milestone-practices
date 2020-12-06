#include <iostream>
#include <memory> // unique_ptr
#include <functional>

/* problem

// returned new object will most likely be forgotten to be deleted
int* make(const int number) {
    int* copy = new int(number);
    return copy;
}

*/

template <typename T>
std::unique_ptr<T> make_unique(const T object) {
    std::unique_ptr<T> copy(new T(object));
    return copy;
}

int main()
{
    std::unique_ptr<int> number =  make_unique<int>(3); // non-standard make_unique
    std::cout << *number << std::endl;

    return 0;
}
