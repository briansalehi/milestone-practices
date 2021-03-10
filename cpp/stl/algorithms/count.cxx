#include <algorithm>
#include <iostream>
#include <set>

int main()
{
    std::multiset<int> orderedNumbers{5,2,2,1,1,1,3,4,4};

    for_each(
        orderedNumbers.cbegin()
        , orderedNumbers.cend()
        , [](const int& element) { std::cout << element << " "; }
    );
    std::cout << std::endl;

    // count an element by value
    size_t amount = count(orderedNumbers.cbegin(), orderedNumbers.cend(), 4);
    std::cout << "There are " << amount << " elements having value 4" << std::endl;

    // count by a predicate
    amount = count_if(
        orderedNumbers.cbegin()
        , orderedNumbers.cend()
        , [](const int& element) { return ((element % 2) == 0); }
    );
    std::cout << "There are " << amount << " even numbers" << std::endl;

    return 0;
}
