#include <iostream> // cout, endl
#include <iterator> // set_intersection
#include <algorithm> // for_each
#include <set> // set

void display(std::set<int>& container) {
    std::for_each(container.cbegin(), container.cend(),
        [](const int& element) { std::cout << element << " "; });
    std::cout << std::endl;
}

int main()
{
    std::set<int> couples = {2,4,6,8,10};
    std::set<int> primes = {1,2,3,5,7};

    /*
        insert_iterator will be discussed later
        set_intersection function needs 5 output iterators,
        we convert input iterator intersections.begin()
        to output iterator using std::insert_iterator
    */
    std::set<int> intersections;
    std::set_intersection(couples.begin(), couples.end(), primes.begin(), primes.end(), std::insert_iterator<std::set<int>> (intersections, intersections.begin()));
    display(intersections);

    return 0;
}
