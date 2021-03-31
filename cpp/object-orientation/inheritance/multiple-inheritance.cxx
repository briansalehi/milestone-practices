#include <iostream>

struct Alpha {
public:
    Alpha() { std::cout << "Alpha Constructor Invoked" << std::endl; }
	~Alpha() { std::cout << "Alpha Destructor Invoked" << std::endl; }
};

struct Beta {
	Beta() { std::cout << "Beta Constructor Invoked" << std::endl; }
	~Beta() { std::cout << "Beta Destructor Invoked" << std::endl; }
};

struct Compound: public Alpha, public Beta {
	Compound() { std::cout << "Compound Constructor Invoked" << std::endl; }
	~Compound() { std::cout << "Compound Destructor Invoked" << std::endl; }
};

int main()
{
    Compound object;
    return 0;
}
