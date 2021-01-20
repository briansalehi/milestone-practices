#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers{15,73,91,14,53,46,12};
    const int divisor = 2;
    std::vector<int>::const_iterator position = numbers.cbegin();

    // find all even numbers in container
    while (position != numbers.cend()) {
        position = find_if(position, numbers.cend()
            // lambda function as unary predicate
            , [](const int& element) { return ((element % divisor) == 0); }
        );
        std::cout << *position << std::endl;
        ++ position;
    }

    return 0;
}
