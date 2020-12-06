#include <iostream>
#include <algorithm>
#include <vector>

void Display(std::vector<int> &container) {
    for_each(container.cbegin(), container.cend(), [](const int elem) { std::cout << elem << " "; });
    std::cout << std::endl;
}

int main()
{
    std::vector<int> container;

    container.push_back(3);
    container.push_back(5);
    container.push_back(1);
    container.push_back(2);
    container.push_back(4);

    Display(container);

    // descending order sort
    sort(container.begin(), container.end(), [](int a, int b) { return(a < b); });
    
    Display(container);

    return 0;
}
