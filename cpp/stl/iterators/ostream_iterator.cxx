#include <iostream>
#include <iterator>
#include <array>

int main()
{
    std::array<int, 10> container = {0,1,2,3,4,5,6,7,8,9};
    std::ostream_iterator<int,char> output_iterator(std::cout, " ");
    std::copy(container.cbegin(), container.cend(), output_iterator);
    std::cout << std::endl;

    return 0;
}
