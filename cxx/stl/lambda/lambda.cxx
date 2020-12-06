#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
	std::vector<int> numbers {1,2,3,4,5};
	// lambda function declared as third parameter
	std::for_each(numbers.cbegin(), numbers.cend(), [](const int &element) { std::cout << element << " "; });
	std::cout << std::endl;
	return 0;
}
