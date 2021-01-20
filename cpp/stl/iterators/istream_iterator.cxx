#include <iostream>
#include <iterator>
#include <array>

int main()
{
    std::array<char,10> container = {0,1,2,3,4};
    std::ostream_iterator<int,char> output_iterator(std::cout, " ");

    std::copy(
        std::istream_iterator<int,char>(std::cin),
        std::istream_iterator<int,char>(),
        container.begin()+5
    );
    std::copy(container.cbegin(), container.cend(), output_iterator);
    std::cout << std::endl;

    return 0;
}
