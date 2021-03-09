#include <vector>

int main()
{
    std::vector<int> numbers;
    // initialize std::vector using push_back
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);
    numbers.push_back(4);

    // initializing using list initialization reduces code lines
    std::vector<int> array{1,2,3,4};
    
    return 0;
}
