#include <iostream>
#include <vector>

void info(const std::vector<int> &vec) {
    std::cout << "size: " << vec.size() << "\t";
    std::cout << "capacity: " << vec.capacity() << std::endl << std::endl;
}

int main()
{
    std::vector<int> integers;
    // reserved 6 elements in std::vector, memory won't be populated but will be reserved
    integers.reserve(6);
    // std::vector is still empty
    integers.push_back(1);
    integers.push_back(2);
    integers.push_back(3);
    integers.push_back(4);
    integers.push_back(5);

    std::cout << "initial vector" << std::endl;
    info(integers);
    
    integers.push_back(0);
    std::cout << "pushing back into std::vector" << std::endl;
    info(integers);

    integers.pop_back();
    std::cout << "poping back from std::vector" << std::endl;
    info(integers);

    return 0;
}
