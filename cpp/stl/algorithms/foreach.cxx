#include <algorithm>
#include <iostream>
#include <string>
#include <map>

int main()
{
    std::map<int, std::string> numbers;
    numbers.insert(std::make_pair(2, "two"));
    numbers.insert(std::make_pair(5, "five"));
    numbers.insert(std::make_pair(1, "one"));
    numbers.insert(std::make_pair(4, "four"));
    numbers.insert(std::make_pair(3, "three"));

    // using for_each to display container elements
    for_each(
        numbers.cbegin()
        , numbers.cend()
        , [](const std::pair<int, std::string>& pair) {
            std::cout << pair.first << ": " << pair.second << std::endl;
        }
    );

    return 0;
}
