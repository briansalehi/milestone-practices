#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

template <typename container_t>
void display(const container_t& container) {
    for_each(
        container.cbegin()
        , container.cend()
        , [](const auto& element) { std::cout << element << " "; }
    );
    std::cout << std::endl;
}

int main()
{
    std::vector<std::string> names{"jack", "brian", "kevin", "veladimir", "sara"};
    display(names);

    // stable sort preserves relative position of equal values, costs performance!
    stable_sort(names.begin(), names.end());
    display(names);

    // descending order
    sort(
        names.begin()
        , names.end()
        , [](const std::string& left, const std::string& right) { return (left > right); }
    );
    display(names);

    // ascending order
    sort(names.begin(), names.end());
    display(names);

    return 0;
}
