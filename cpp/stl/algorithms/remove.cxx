#include <algorithm>
#include <iostream>
#include <string>
#include <list>

int main()
{
    std::list<int> numbers{13,5,57,0,8,61,89};

    // remove elements with value of 0
    std::list<int>::iterator numbers_new_end = remove(numbers.begin(), numbers.end(), 0);
    // if left elements not removed, you'll be facing junk values
    numbers.erase(numbers_new_end, numbers.end()); // removes 0

    numbers_new_end = remove_if (
        numbers.begin()
        , numbers.end()
        , [](const auto& element) { return ((element % 2) != 0); }
    );
    numbers.erase(numbers_new_end, numbers.end()); // only 8 should remain

    for_each(
        numbers.cbegin()
        , numbers.cend()
        , [](const int& element) { std::cout << element << " "; }
    );
    std::cout << std::endl;

    return 0;
}
