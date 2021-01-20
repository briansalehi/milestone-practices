#include <iostream>

struct Human {
// everything public unless specified
private:
    int years;
public:
    Human(int newage): years{newage} {};

    int age() {
        return years;
    }
};

int main()
{
    Human kid(10);
    std::cout << "this human is " << kid.age() << " years old" << std::endl;
    return 0;
}
