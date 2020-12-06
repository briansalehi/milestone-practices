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

    map1.insert(std::map<int, std::string>::value_type(1, "One"));
    map1.insert(std::make_pair(2, "Two"));
    map1.insert(std::pair <int, std::string>(3, "Three"));
    describe(map1);

    map1.erase(3);
    describe(map1);

    std::multimap<int, std::string> mmap1(map1.cbegin(), map1.cend());
    mmap1.insert(std::make_pair(4, "firstFour"));
    mmap1.insert(std::make_pair(4, "secondFour"));
    mmap1.insert(std::make_pair(4, "thirdFour"));
    mmap1.insert(std::pair <int, std::string>(5, "Five"));
    describe(mmap1);

    mmap1.erase(mmap1.lower_bound(4), mmap1.upper_bound(4));
    describe(mmap1);

    return 0;
}
