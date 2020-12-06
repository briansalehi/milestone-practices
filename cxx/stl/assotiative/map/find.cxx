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
    map1.insert(std::pair<int, std::string>(3, "Three"));
    describe(map1);

    // find position of corresponding key
    std::map<int, std::string>::iterator position = map1.find(2);
    // always check iterator for validity
    if (position != map1.cend()) {
        std::cout << position->first << "->" << position->second << std::endl;
    }
    else {
        std::cout << "key not found" << std::endl;
    }

    std::multimap<int, std::string> mmap1(map1.cbegin(), map1.cend());
    mmap1.insert(std::make_pair(4, "firstFour"));
    mmap1.insert(std::make_pair(4, "secondFour"));
    mmap1.insert(std::make_pair(4, "thirdFour"));
    mmap1.insert(std::pair<int, std::string>(5, "Five"));
    describe(mmap1);

    // find first position of corresponding key in std::multimap
    position = mmap1.find(4);
    if (position != mmap1.cend()) {
        // count the key and iterate over all positions
        const size_t limit = mmap1.count(4);
        for (size_t i = 0; i < limit; ++i) {
            std::cout << position->first << "->" << position->second << std::endl;
            // increment position after each iteration
            ++ position;
        }
    }
    else {
        std::cout << "key not found" << std::endl;
    }

    return 0;
}
