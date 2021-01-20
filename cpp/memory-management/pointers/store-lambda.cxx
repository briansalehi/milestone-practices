#include <functional>
#include <algorithm>
#include <iostream>
#include <vector>

std::function<void(const int&)> lambda = [](const int& element) {
    std::cout << element << " ";
};

int main()
{
    std::vector<int> container = {1,2,3,4,5};
    for_each(container.cbegin(), container.cend(), lambda);
    std::cout << std::endl;

    return 0;
}
