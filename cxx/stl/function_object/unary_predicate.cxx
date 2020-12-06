#include <iostream>
#include <algorithm>
#include <vector>
#include <deque>

template <typename printable>
void Describe(const printable& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;
}

// divisable by two predicate
template <typename numeric>
struct Divisable {
    bool operator() (const numeric& input) const {
        return ((input % 2) == 0);
    }
};

int main()
{
    std::vector<int> numbers{53,77,26,89,14,55,78};
    std::deque<int> divisables;

    // find first number divisable by two
    auto position = find_if(numbers.cbegin(), numbers.cend(), Divisable<int>());
    if (position != numbers.cend()) {
        std::cout << *position << std::endl;
    }
    else {
        std::cout << "no number is divisable by two" << std::endl;
    }
    std::cout << std::endl;

    // find all numbers divisable by two
    while (position != numbers.cend()) {
        // add offset to prevent duplicate results
        auto offset = distance(numbers.cbegin(), position);
        position = find_if(numbers.cbegin() + offset, numbers.cend(), Divisable<int>());
        // insert divisable elements into std::deque
        divisables.push_back(*position);
        ++position;
    }

    // print std::deque elements
    Describe(divisables);
    
    return 0;
}
