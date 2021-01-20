#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string container = "CIA";
    std::sort(container.begin(), container.end());

    while (std::next_permutation(container.begin(), container.end())) {
        std::cout << container << std::endl;
    }

    return 0;
}
