#include <iostream>
#include <iterator>
#include <deque>

int main()
{
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    std::deque<int> container;

    std::front_insert_iterator<std::deque<int>> front_iter(container);
    std::copy(array, array+10, front_iter);

    std::copy(
        container.cbegin(),
        container.cend(),
        std::ostream_iterator<int,char> (std::cout, " ")
    );
    std::cout << std::endl;

    return 0;
}
