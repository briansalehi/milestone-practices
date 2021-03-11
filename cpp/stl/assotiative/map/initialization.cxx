#include <map>
#include <string>

// predicate class
template <typename K>
struct descending {
    bool operator() (const K& lhs, const K& rhs) { return (lhs > rhs); }
};

int main()
{
    // no initialization
    std::map<int, std::string> map1;
    std::multimap<int, std::string> mmap1;

    // initializing with another container
    std::map<int, std::string> map2(map1);
    std::multimap<int, std::string> mmap2(mmap1);

    // initializing with iterator
    std::map<int, std::string> map3(map1.cbegin(), map1.cend());
    std::multimap<int, std::string> mmap3(mmap1.cbegin(), mmap1.cend());

    // initializing with predicate sort
    std::map<int, std::string, descending<int>> map4(map1.cbegin(), map1.cend());
    std::multimap<int, std::string, descending<int>> mmap4(mmap1.cbegin(), mmap1.cend());

    return 0;
}
