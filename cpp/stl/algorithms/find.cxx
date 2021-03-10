#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers{1,2,3,4,5,6,7,8,9};
    int item = 4;

    // find by a value to search through container
    std::vector<int>::const_iterator found = find(numbers.cbegin(), numbers.cend(), item);

    if (found != numbers.cend()) {
        std::cout << "Found " << *found << std::endl;
	} else {
        std::cout << "Element not found" << std::endl;
	}

    // find_if using a predicate instead of value
    std::vector<int>::const_iterator position = find_if(
        numbers.cbegin()
        , numbers.cend()
        , [](const int& element) -> bool { return ((element % 2) == 0); }
    );

    if (position != numbers.cend()) {
        std::cout << "Found " << *position << std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}
