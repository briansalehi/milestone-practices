#include <algorithm>
#include <iostream>
#include <string>
#include <map>

int main()
{
    std::multimap<int, std::string> numbers;
    numbers.insert(std::make_pair(2, "two"));
    numbers.insert(std::make_pair(5, "five"));
    numbers.insert(std::make_pair(1, "one"));
    numbers.insert(std::make_pair(4, "four"));
    numbers.insert(std::make_pair(4, "four"));
    numbers.insert(std::make_pair(4, "four"));
    numbers.insert(std::make_pair(3, "three"));

    std::map<int, std::string> pattern;
    pattern.insert(std::make_pair(3, "three"));

    for_each(
        numbers.cbegin()
        , numbers.cend()
        , [](const auto& pair) { std::cout << pair.first << ": " << pair.second << std::endl; }
    );
    std::cout << std::endl;

    // search if one range is contained in another
    std::multimap<int, std::string>::const_iterator position = search (
        numbers.cbegin()
        , numbers.cend()
        , pattern.cbegin()
        , pattern.cend()
    );

    if (position != numbers.cend()) {
        std::cout << "found sub-range in position: ";
        std::cout << distance(numbers.cbegin(), position) << std::endl;
    }
    else {
        std::cout << "sub-range not found" << std::endl;
    }

    // check if n instances of a value placed consequently are to be found
    // fifth parameter is optional predicate (other containers won't need it)
    position = search_n(
        numbers.cbegin()
        , numbers.cend()
        , 3
        , std::pair<int, std::string>(4, "four")
        , [](const auto& source, const auto& target) -> bool {
            return (source.second == target.second);
        }
    );

    if (position != numbers.cend()) {
        std::cout << "found 3 instances of pair (4, \"four\") in position: ";
        std::cout << distance(numbers.cbegin(), position) << std::endl;
    }
    else {
        std::cout << "pair not found" << std::endl;
    }

    return 0;
}
