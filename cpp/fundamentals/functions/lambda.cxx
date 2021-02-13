#include <iostream>
#include <algorithm>
#include <vector>

void display(std::vector<int>& container) {
	// lambda function to display elements of a container
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

    display(container);

    // lambda function used to sort a container
    sort(container.begin(), container.end(), [](int a, int b) { return(a < b); });
    
    display(container);

    return 0;
}
