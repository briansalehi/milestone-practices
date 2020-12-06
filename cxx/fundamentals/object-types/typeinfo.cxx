#include <typeinfo>
#include <iostream>

class Base {
public:
    Base() = default;
};

int function(const int param) {
    return param;
}

double function(const double param) {
    return param;
}

int main()
{
    double number = 3.141592;
    int (*ifp)(const int) = function;
    double (*dfp)(const double) = function;

    // name() method indicates the type of object was given
    std::cout << typeid(number).name() << std::endl;

    std::cout << typeid(Base).name() << std::endl;
    // hash_code() returns a hash value identifying the object
    std::cout << typeid(Base).hash_code() << std::endl;

    std::cout << typeid(*ifp).name() << std::endl;
    std::cout << typeid(dfp).name() << std::endl;


    // before() method clarifies which type precedes the other 
    if (typeid(char).before(typeid(int))) {
        std::cout << "int has higher priority over char in this compiler" << std::endl;
    }
    else {
        std::cout << "char has higher priority over int in this compiler" << std::endl;
    }

    return 0;
}
