#include <functional>
#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>
#include <set>
#include <map>

std::function<void(const int&)> sort_elements = [](const int& element) { std::cout << element << " "; };
std::function<void(const std::pair<int, std::string>&)> sort_pairs =
[](const std::pair<int, std::string>& pair) { std::cout << pair.first << ": " << pair.second << std::endl; };

int main()
{
    // displayed std::vector elements by lambda function
    std::vector<int> numbersInVector{2,5,3,1,4};
    for_each(numbersInVector.cbegin() , numbersInVector.cend() , sort_elements);
    std::cout << std::endl;

    // displayed std::deque elements by lambda function
    std::deque<int> numbersInDeque{2,5,3,1,4};
    for_each(numbersInDeque.cbegin() , numbersInDeque.cend() , sort_elements);
    std::cout << std::endl;

    // displayed std::list elements by lambda function
    std::list<int> numbersInList{2,5,3,1,4};
    for_each(numbersInList.cbegin() , numbersInList.cend() , sort_elements);
    std::cout << std::endl;

    // displayed std::set elements by lambda function
    std::set<int> numbersInSet{2,5,3,1,4};
    for_each(numbersInSet.cbegin() , numbersInSet.cend() , sort_elements);
    std::cout << std::endl;

    // displayed std::map pairs by lambda function, notice the change in lamda implementation
    std::map<int, std::string> numbersInMap;
    numbersInMap.insert(std::make_pair(2, "two"));
    numbersInMap.insert(std::make_pair(5, "five"));
    numbersInMap.insert(std::make_pair(3, "three"));
    numbersInMap.insert(std::make_pair(1, "one"));
    numbersInMap.insert(std::make_pair(4, "four"));
    for_each(numbersInMap.cbegin() , numbersInMap.cend() , sort_pairs);

    return 0;
}
