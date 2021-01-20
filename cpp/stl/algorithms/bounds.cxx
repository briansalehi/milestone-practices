#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers{3,4,1,5,2};

    sort(numbers.begin(), numbers.end());

    std::vector<int>::const_iterator lowbound = lower_bound(numbers.begin(), numbers.end(), 4);
    std::vector<int>::const_iterator upbound = upper_bound(numbers.begin(), numbers.end(), 4);
    
    std::cout << "lower bound of 4: " << *lowbound << std::endl;
    std::cout << "upper bound of 4: " << *upbound << std::endl;

    numbers.insert(lowbound, 4);

    for_each(
        numbers.cbegin()
        , numbers.cend()
        , [](const int& element) { std::cout << element << " "; }
    );
    std::cout << std::endl;

    return 0;
}
