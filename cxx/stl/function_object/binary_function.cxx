#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

// binary function object
template <typename numeric>
struct Multiply {
    numeric operator() (const numeric& a, const numeric& b) const {
        return (a * b);
    }
};

// generic display function
template <typename printable>
void Display(const printable& element) { std::cout << element << " "; }

int main()
{
    std::vector<int> multiplicants{1,2,3,4,5,6,7,8,9};
    std::vector<int> multipliers{9,8,7,6,5,4,3,2,1};
    std::list<int> orderedResult;
    
    // resize results container to store multiplied numbers
    orderedResult.resize(multipliers.size());

    // multiply containers and move to result
    transform(multiplicants.cbegin(),
        multiplicants.cend(),
        multipliers.cbegin(),
        orderedResult.begin(),
        Multiply<int>()
    );

    // display containers
    for_each(multiplicants.cbegin(), multiplicants.cend(), Display<int>);
    std::cout << std::endl;
    for_each(multipliers.cbegin(), multipliers.cend(), Display<int>);
    std::cout << std::endl;
    for_each(orderedResult.cbegin(), orderedResult.cend(), Display<int>);
    std::cout << std::endl;

    return 0;
}
