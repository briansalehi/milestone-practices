#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>

int main()
{
    std::vector<int> container = {0,1,2,3,4,5,6,7,8,9};
    std::vector<int> copy;

    // use as output iterator to make a copy
    std::insert_iterator<std::vector<int>> inserter(copy, copy.begin());

    // copy containers
    std::copy(container.cbegin(), container.cend(), inserter);

    // display
    std::copy(copy.cbegin(), copy.cend(), std::ostream_iterator<int,char>(std::cout," "));
    std::cout << std::endl;

    return 0;
}
