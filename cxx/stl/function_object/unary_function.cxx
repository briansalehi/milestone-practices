#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

// generic container describer
template <typename D>
struct Describe {
    void operator() (const D& container) const {
            std::cout << container;
    }

    ~Describe() { std::cout << std::endl; }
};

int main()
{
    // instantiating and initializing a vector
    std::vector<int> integers;
    integers.push_back(1);
    integers.push_back(2);
    integers.push_back(3);
    integers.push_back(4);
    // unary function object as third parameter
    for_each(integers.cbegin(), integers.cend(), Describe<int>());

    std::list<char> characters;
    characters.push_back('A');
    characters.push_back('B');
    characters.push_back('C');
    // unary function object to iterate over a container
    for_each(characters.cbegin(), characters.cend(), Describe<char>());
    
    return 0;
}
