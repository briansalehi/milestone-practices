#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

// generic display function
template <typename printable>
void Display(const printable& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << *iterator << std::endl;
    }
    std::cout << std::endl;
}

// compare std::strings binary predicate
struct iSort {
    bool operator() (const std::string& str1, const std::string& str2) const {
        std::string lower1;
        lower1.resize(str1.size());
        transform(str1.begin(), str1.end(), lower1.begin(), ::tolower);

        std::string lower2;
        lower2.resize(str2.size());
        transform(str2.begin(), str2.end(), lower2.begin(), ::tolower);

        return (lower1 < lower2);
    }
};

int main()
{
    // unsorted names
    std::vector<std::string> names;
    names.push_back("Kevin");
    names.push_back("Brian");
    names.push_back("rick");
    names.push_back("Vladimir");
    names.push_back("jack");
    names.push_back("frank");
    Display(names);

    // sorted by default predicate
    sort(names.begin(), names.end());
    Display(names);

    // sorted by custom predicate
    sort(names.begin(), names.end(), iSort());
    Display(names);

    return 0;
}
