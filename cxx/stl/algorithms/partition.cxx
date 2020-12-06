#include <algorithm>
#include <iostream>
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
    std::vector<int> unrelative{3,4,1,5,2};
    std::vector<int> relative(unrelative);
    display(unrelative);

    // partitions the container into two parts, evens and odds
    partition(
        unrelative.begin()
        , unrelative.end()
        , [](const int& element) { return ((element % 2) == 0); }
    );
    display(unrelative);

    // stable_partition preserves relative order of elements but it costs performance
    stable_partition(
        relative.begin()
        , relative.end()
        , [](const int& element) { return ((element % 2) == 0); }
    );
    display(relative);

    return 0;
}
