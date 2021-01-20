#include <iostream>
#include <vector>

int main()
{
    std::vector<int> integers{1,2,3,4,5};

    // not a good way to iterate over a container
    for (size_t i = 0; i < integers.size(); ++i) {
        std::cout << integers[i] << " ";
    }
    std::cout << std::endl;

    // possible to cross boundaries, not a good idea to use subscript operator
    std::cout << "second element: " << integers[1] << std::endl;
    
    // best way to directly access an element in std::vector, boundaries are safe with at()
    std::cout << "third element: " << integers.at(2) << std::endl;

    return 0;
}
