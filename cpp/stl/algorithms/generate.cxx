#include <algorithm>
#include <iostream>
#include <string>
#include <ctime>
#include <list>

template <typename container_t>
void display (const container_t& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;
}

int main()
{
    srand(time(NULL));

    // generate with unary function
    std::list<int> numbers;
    numbers.resize(3);
    generate(numbers.begin(), numbers.end(), rand);
    display(numbers);

    // generate_n with unary function
    std::list<int> randoms;
    randoms.resize(3);
    generate_n(randoms.begin(), 3, rand);
    display(randoms);

    return 0;
}
