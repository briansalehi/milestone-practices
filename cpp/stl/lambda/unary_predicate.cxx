#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers{15,73,91,14,53,46,12};

    std::vector<int>::const_iterator position = numbers.cbegin();

    // find all even numbers in container
    while (position != numbers.cend()) {
		// lambda function as unary predicate
        position = find_if(position, numbers.cend(), [](const int& element) { return ((element % 2) == 0); } );
        std::cout << *position << std::endl;
        ++ position;
    }

    return 0;
}
