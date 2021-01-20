#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

template <typename container_t>
void display(const container_t& container) {
    for_each (
        container.cbegin()
        , container.cend()
        , [](const auto& element) { std::cout << element << " "; }
    );
    std::cout << std::endl;
}

int main()
{
    std::vector<std::string> names{"jack", "brian", "jack", "jack", "sara"};
    display(names);

    // unique won't completely work on unsorted containers and there's still two jacks
    std::vector<std::string>::iterator names_new_end = unique(names.begin(), names.end());
    // removed elements make empty positions at the end of container which should be removed manually
    names.erase(names_new_end, names.end());
    display(names);

    // unique returns an iterator pointing to the new end of container
    sort(names.begin(), names.end());
    names_new_end = unique (names.begin(), names.end());
    names.erase(names_new_end, names.end());
    display(names);

    return 0;
}
