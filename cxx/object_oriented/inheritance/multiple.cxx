#include <iostream>

class Alpha {
public:
    Alpha(int init): member{init} {}

    void display() {
        std::cout << "Alpha Method Invoked" << std::endl;
    }

    int get() {
        return member;
    }

private:
    int member;
};

class Beta {
public:
    Beta(int init): member{init} {}

    void display() {
        std::cout << "Beta Method Invoked" << std::endl;
    }

    int get() {
        return member;
    }

private:
    int member;
};

class Compound: public Alpha, public Beta {
public:
    Compound(): Alpha{10}, Beta{20} {
        member = Alpha::get() + Beta::get();
    }

    void display() {
        std::cout << "Beta Method Invoked" << std::endl;
        std::cout << "alpha: " << Alpha::get() << std::endl;
        std::cout << "beta: " << Beta::get() << std::endl;
        std::cout << "compund: " << member << std::endl;
    }

private:
    int member;
};

int main()
{
    Compound object;
    object.display();

    return 0;
}
