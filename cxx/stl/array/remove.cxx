#include <iostream>
#include <vector>

template <typename T>
void display(const std::vector<T> array) {
    for (auto elem = array.cbegin(); elem != array.cend(); ++elem) {
        std::cout << *elem << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::vector<int> integers{1,2,3,4,5};
    display(integers);

    integers.pop_back();
    display(integers);

    return 0;
}
