#include <iostream>

inline int sum(int a, int b)
{
    return a + b;
}

int main()
{
	int a = 1, b = 2;
    std::cout << sum(a, b) << std::endl;
    return 0;
}
