#include <iostream>
#include <string>
#include <map>

// display container information
template <typename D>
void describe(const D& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << iterator->first << ":" << iterator->second << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::map<int, std::string> map1;

    // initializing with value_type
    map1.insert(std::map<int, std::string>::value_type(1, "One"));
    // initializing with make_pair function
    map1.insert(std::make_pair(2, "Two"));
    // initializing with pair object
    map1.insert(std::pair<int, std::string>(3, "Three"));

    // all above actions can be taken on std::multimap
    // initializing std::multimap with a copy of map
    std::multimap<int, std::string> mmap1(map1.cbegin(), map1.cend());
    mmap1.insert(std::make_pair(4, "Four"));
    mmap1.insert(std::pair<int, std::string>(5, "Five"));

    describe(map1);
    describe(mmap1);
    return 0;
}
