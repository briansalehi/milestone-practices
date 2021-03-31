#include <iostream>

struct Top {
    Top() {
        std::cout << "Top Constructor Invoked" << std::endl;
    }

    ~Top() {
        std::cout << "Top Destructor Invoked" << std::endl;
    }
};

struct Middle: public Top {
    Middle() {
        std::cout << "Middle Constructor Invoked" << std::endl;
    }

    ~Middle() {
        std::cout << "Middle Destructor Invoked" << std::endl;
    }
};

struct Bottom: public Middle {
    Bottom() {
        std::cout << "Bottom Constructor Invoked" << std::endl;
    }

    ~Bottom() {
        std::cout << "Bottom Destructor Invoked" << std::endl;
    }
};

int main()
{
    Bottom object;
    return 0;
}
