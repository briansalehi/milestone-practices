#include <iostream>
#include <set>

template <typename C>
void display(const C& container) {
    for (auto iterator = container.cbegin(); iterator != container.cend(); ++iterator) {
        std::cout << *iterator << " ";
    }
    std::cout << std::endl;
}

int main()
{
    std::set<int> integers;
    std::set<int> copy;
    std::multiset<double> doubles;

    // std::set insertion by values
    integers.insert(4);
    integers.insert(5);
    integers.insert(4);
    integers.insert(4);

    doubles.insert(3.1415);
    doubles.insert(2.7182);
    doubles.insert(3.1415);
    doubles.insert(3.1415);

    // std::set insertion by iterators
    copy.insert(integers.cbegin(), integers.cend());

    display(integers);
    display(doubles);
    display(copy);

    // count the number of a value in std::multiset
    std::cout << "number of 4s in integers container: " << integers.count(4) << std::endl;
    std::cout << "number of 4s in doubles container: " << doubles.count(3.1415) << std::endl;

    return 0;
}
