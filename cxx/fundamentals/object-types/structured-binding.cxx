#include <iostream>

int main()
{
	struct Point { double mX, mY, mZ; };
	Point point;
	point.mX = 1; point.mY = 2; point.mZ = 3;
	auto [x, y, z] = point;

	std::cout << x << ", " << y << ", " << z << std::endl;
	return 0;
}
