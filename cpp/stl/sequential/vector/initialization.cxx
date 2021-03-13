#include <vector>

int main()
{
	std::vector<int> sample1 = {1,2,3,4,5}; // initialize by copy assignment operator=
	std::vector<int> sample2{1,2,3,4,5}; // initialize by list initialization
	std::vector<int> copy(sample2); // initialize by copy constructor
	std::vector<int> sample3;
	sample3.push_back(1);
	sample3.push_back(2);
	sample3.push_back(3);

	return 0;
}
