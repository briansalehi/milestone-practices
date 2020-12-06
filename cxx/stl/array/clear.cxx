#include <iostream>
#include <vector>

int main()
{
    // initialize std::vector
    std::vector<int> integers{1,2,3,4,5};
    // clear std::vector
    integers.clear();
    // empty returns true if container is empty
    if (integers.empty()) {
        std::cout << "empty std::vector" << std::endl;
    }

    return 0;
}
