#include <iostream>

class Engine {
public:
    void ignite(bool state) {
        if (state) {
            std::cout << "Firing up the engine" << std::endl;
        }
        else {
            std::cout << "Shutting down the engine" << std::endl;
        }
    }
};

class Car: private Engine {
public:
    void move() {
        ignite(true);
    }
};

int main()
{
    Car lemo;
    lemo.move();
    /*
    lemo.ignite(true); // inaccessible
    */

    return 0;
}
