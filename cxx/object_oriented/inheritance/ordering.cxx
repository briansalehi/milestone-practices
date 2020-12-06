#include <iostream>

class Top {
public:
    Top() {
        std::cout << "Top Constructor Invoked" << std::endl;
    }

    ~Top() {
        std::cout << "Top Destructor Invoked" << std::endl;
    }
};

class Middle: public Top {
public:
    Middle() {
        std::cout << "Middle Constructor Invoked" << std::endl;
    }

    ~Middle() {
        std::cout << "Middle Destructor Invoked" << std::endl;
    }
};

class Bottom: public Middle {
public:
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
