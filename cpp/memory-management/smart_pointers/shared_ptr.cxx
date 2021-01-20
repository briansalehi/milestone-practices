#include <memory>

int main()
{
	{
    std::shared_ptr<int> number(new int(3));
    // now number and pointer both point to one location
    std::shared_ptr<int> pointer = number;
	}

	{
	std::shared_ptr<int> number = std::make_shared<int>(3);
	std::shared_ptr<int> pointer = number;
	}

    return 0;
}
