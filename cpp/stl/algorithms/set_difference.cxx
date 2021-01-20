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
    std::set<int> odds = {1,3,5,7,9};
    std::set<int> primes = {1,2,3,5,7};

    /*
        insert_iterator will be discussed later
        set_difference function needs 5 output iterators,
        we convert input iterator differences.begin()
        to output iterator using std::insert_iterator
    */
    std::set<int> differences;
    std::set_difference(odds.begin(), odds.end(), primes.begin(), primes.end(), std::insert_iterator<std::set<int>> (differences, differences.begin()));
    display(differences);

    return 0;
}
