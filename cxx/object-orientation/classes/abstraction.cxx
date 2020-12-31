#include <iostream>

class Army {
private: // abstraction
    int reinforcement = 150000;

public: // abstraction
    void report() {
        std::cout << "there are " << reinforcement << " reinforcement in the army" << std::endl;
    }

    void join(int men) {
        std::cout << "joining " << men << " reinforcement to the army" << std::endl;
        reinforcement += men;
    }
};

int main()
{
    Army forces;
    forces.report();
    forces.join(50000);
    forces.report();

    return 0;
}
