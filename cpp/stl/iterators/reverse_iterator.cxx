#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

int main()
{
    std::vector<int> container = {0,1,2,3,4,5,6,7,8,9};
    std::ostream_iterator<int,char> output(std::cout, " ");

    // approach 1
    std::copy(container.rbegin(), container.rend(), output);
    std::cout << std::endl;

    // approach 2
    // container.rbegin() == container.end()
    std::vector<int>::reverse_iterator end = container.rbegin();
    // container.rend() == container.begin()
    std::vector<int>::reverse_iterator begin = container.rbegin();
    std::for_each(begin, end, [](const int& element) { std::cout << element << " "; });
    std::cout << std::endl;

    return 0;
}
