#include <iostream>

class Base
{
public:
    // give this function access to private members of Base
    friend void show(Base& base);

private:
    int member = 0;
};

void show(Base& base)
{
    // normally does not have access to private member of Base
    std::cout << base.member << std::endl;
}

int main()
{
    Base object;
    show(object);

    return 0;
}
