#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers{15,73,91,14,53,46,12};
    int divisor = 2;

    std::vector<int>::const_iterator position = find_if(
        numbers.cbegin()
        , numbers.cend()
        // divisor in capture list
        , [divisor](const int& dividend) { return ((dividend % divisor) == 0); }
    );

    // always check for iterator!
    if (position != numbers.cend()) {
        std::cout << "found element: " << *position << std::endl;
    }
    else {
        std::cout << "no element is divisable by " << divisor << std::endl;
    }

    return 0;
}
