#include <iostream>
#include <iterator>
#include <algorithm>
#include <set>

void display(std::set<int>& container) {
    std::for_each(container.cbegin(), container.cend(),
        [](const int& element) { std::cout << element << " "; });
    std::cout << std::endl;
}

int main()
{
    std::set<int> couples = {2,4,6,8,10};
    std::set<int> odds = {1,3,5,7,9};

    /*
        insert_iterator will be discussed later
        set_union function needs 5 output iterators,
        we convert input iterator unions.begin()
        to output iterator using std::insert_iterator
    */
    std::set<int> numbers;
    std::set_union(odds.begin(), odds.end(), couples.begin(), couples.end(), std::insert_iterator<std::set<int>>(numbers, numbers.begin()));
    display(numbers);

    return 0;
}
