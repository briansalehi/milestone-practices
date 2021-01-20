#include <iostream>
#include <vector>

int main()
{
    std::vector<int> integers{1,2,3,4,5};

    // use constant iterators for displaying array elements
    std::vector<int>::const_iterator elem;
    for (elem = integers.cbegin(); elem != integers.cend(); ++elem) {
        std::cout << *elem << " ";
    }
    std::cout << std::endl;

    // another way
    elem = integers.cbegin();
    while (elem != integers.cend()) {
        std::cout << *elem << " ";

        ++elem;
    }
    std::cout << std::endl;

    return 0;
}
