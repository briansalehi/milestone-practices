#include <iostream>
#include <algorithm>
#include <string>
#include <map>

// std::string sort predicate
struct ascending {
    bool operator() (const std::string& lhs, const std::string& rhs) const {
        std::string lname(lhs);
        std::string rname(rhs);

        transform(lhs.cbegin(), lhs.cend(), lname.begin(), ::tolower);
        transform(rhs.cbegin(), rhs.cend(), rname.begin(), ::tolower);
        
        return (lname < rname);
    }
};

// display container information
template <typename D>
void describe(const D& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << iterator->first << ": " << iterator->second << std::endl;
    }
    std::cout << std::endl;
}

int main()
{

    // initialize a std::map with default sort predicate
    std::map<std::string, std::string> map1;
    map1.insert(std::make_pair("Peter", "+1 3857641586"));
    map1.insert(std::make_pair("Brian", "+33 7652493856"));
    map1.insert(std::make_pair("Hana", "+12 4732854627"));
    map1.insert(std::make_pair("Marie", "+7 1832795346"));
    describe(map1);

    // initialize a std::multimap with custom sort predicate
    std::multimap<std::string, std::string, ascending> mmap2(map1.cbegin(), map1.cend());

    std::string name;
    std::cout << "enter a name to search(peter): ";
    std::cin >> name;

    // case-sensitive searching in map
    std::map<std::string, std::string>::iterator position = map1.find(name);
    if(position != map1.cend())
        std::cout << "case-sensitive search result: " << position->first << "->" << position->second << std::endl;
    else
        std::cout << "case-sensitive search result: name not found" << std::endl;

    // case-insensitive searching in std::multimap
    position = mmap2.find(name);
    if(position != mmap2.cend())
        std::cout << "case-insensitive search result: " << position->first << ": " << position->second << std::endl;
    else
        std::cout << "case-insensitive search result: name not found" << std::endl;

    return 0;
}
