#include <algorithm>
#include <iostream>
#include <string>
#include <list>

int main()
{
    std::list<int> numbers{8,5,8,5,8,5};

    replace(numbers.begin(), numbers.end(), 5, 8);

    // even values replaced by -1
    replace_if(
        numbers.begin()
        , numbers.end()
        , [](const int& element) { return ((element % 2) == 0); }
        , -1
    );

    // odd values replaced by -1
    for_each(
        numbers.cbegin()
        , numbers.cend()
        , [](const int& element) { std::cout << element << " "; }
    );
    std::cout << std::endl;

    return 0;
}
