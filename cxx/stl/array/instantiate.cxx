#include <vector>
#include <string>

int main()
{
    // vector with 10 elements
    std::vector<int> integers(10);
    
    // vector with 5 elements all instantiated with value 3.14
    std::vector<double> pies(5, 3.14);

    // instantiating vector with list initialization
    std::vector<std::string> messages{"C++", "programming"};

    // initializing vector with another one
    std::vector<int> copy(integers);

    // initializing vector with iterators
    std::vector<int> numbers(copy.cbegin(), copy.cend());

    return 0;
}
