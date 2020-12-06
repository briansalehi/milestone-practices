#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<std::string> names{"jack", "brian", "jack", "jack", "sara"};

    // binary search will only work on sorted (and unique) container
    sort(names.begin(), names.end());
    std::vector<std::string>::iterator names_new_end = unique(names.begin(), names.end());
    names.erase(names_new_end, names.end());
    
    bool matched = binary_search(names.cbegin(), names.cend(), "jack");
    // always check for search return
    if (matched) {
        std::cout << "found name jack in container" << std::endl;
    }
    else {
        std::cout << "name not found" << std::endl;
    }

    for_each(
        names.cbegin()
        , names.cend()
        , [](const std::string& element) { std::cout << element << " "; }
    );
    std::cout << std::endl;

    return 0;
}
