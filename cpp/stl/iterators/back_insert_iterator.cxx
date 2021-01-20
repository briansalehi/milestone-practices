#include <iostream>
#include <iterator>
#include <vector>

int main()
{
    int array[10] = {0,1,2,3,4,5,6,7,8,9};
    std::vector<int> container;

    std::back_insert_iterator<std::vector<int>> back_iter(container);
    std::copy(array, array+10, back_iter);

    std::copy(
        container.cbegin(),
        container.cend(),
        std::ostream_iterator<int,char> (std::cout, " ")
    );
    std::cout << std::endl;

    return 0;
}
