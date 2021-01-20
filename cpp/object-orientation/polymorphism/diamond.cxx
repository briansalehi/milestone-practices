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

// comment virtual to see what would happen
class Middle1: public virtual Top {
public:
    Middle1() {
        std::cout << "Middle1 Constructor Invoked" << std::endl;
    }

    ~Middle1() {
        std::cout << "Middle1 Destructor Invoked" << std::endl;
    }
};

// virtual base class in the diamond problem makes base class to invoke once
class Middle2: public virtual Top {
public:
    Middle2() {
        std::cout << "Middle2 Constructor Invoked" << std::endl;
    }

    ~Middle2() {
        std::cout << "Middle2 Destructor Invoked" << std::endl;
    }
};

class Middle3: public virtual Top {
public:
    Middle3() {
        std::cout << "Middle3 Constructor Invoked" << std::endl;
    }

    ~Middle3() {
        std::cout << "Middle3 Destructor Invoked" << std::endl;
    }
};

class Bottom: public Middle1, public Middle2, public Middle3 {
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
    Bottom last;
    return 0;
}
