#include <algorithm>
#include <iostream>
#include <vector>

void display(const int& element) {
    std::cout << element << " ";
}

int main()
{
    std::vector<int> multiplicand{1,2,3,4,5};
    std::vector<int> multiplier{5,4,3,2,1};
    std::vector<int> result;
    result.resize(multiplier.size());

    transform(
        multiplicand.cbegin()
        , multiplicand.cend()
        , multiplier.cbegin()
        , result.begin()
        , [](const int& a, const int& b) { return (a + b); }
    );

    for_each( multiplicand.cbegin(), multiplicand.cend(), display);
    std::cout << std::endl;

    for_each( multiplier.cbegin(), multiplier.cend(), display);
    std::cout << std::endl;
    std::cout << "---------" << std::endl;

    for_each( result.cbegin(), result.cend(), display);
    std::cout << std::endl;
    
    return 0;
}
