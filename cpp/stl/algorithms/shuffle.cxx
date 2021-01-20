#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> numbers{1,2,3,4,5};
    srand(time(NULL));

    random_shuffle(numbers.begin(), numbers.end());

    for_each (
        numbers.cbegin()
        , numbers.cend()
        , [](const int& element) { std::cout << element << " "; }
    );
    std::cout << std::endl;

    return 0;
}
