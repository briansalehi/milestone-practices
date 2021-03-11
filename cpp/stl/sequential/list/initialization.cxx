#include <string>
#include <list>

int main()
{
    // std::list with 10 elements
    std::list<int> integers(10);
    
    // std::list with 5 elements all instantiated with value 3.14
    std::list<double> pies(5, 3.14);

    // instantiating std::list with std::list initialization
    std::list<std::string> messages{"C++", "programming"};

    // initializing std::list with another one
    std::list<int> copy(integers);

    // initializing std::list with iterators
    std::list<int> numbers(copy.cbegin(), copy.cend());

    return 0;
}
