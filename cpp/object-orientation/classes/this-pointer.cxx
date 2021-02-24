#include <iostream>

class Sample
{
private:
	int number;
public:
	Sample(int number) : number(number) {};
	int getNumber() { return number; }
	Sample* makeInstance() { return this; }
};

int main()
{
	Sample object(10);
	Sample* instance = object.makeInstance(); // object itself is return

	std::cout << "object: " << object.getNumber() << std::endl;
	std::cout << "instance: " << instance->getNumber() << std::endl;

	return 0;
}
