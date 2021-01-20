#include <iostream>
#include <vector>

void info(const std::vector<int> &vec) {
    std::cout << "size: " << vec.size() << "\t";
    std::cout << "capacity: " << vec.capacity() << std::endl << std::endl;
}

int main()
{
    std::vector<int> integers(5,0);
    std::cout << "initial std::vector" << std::endl;
    info(integers);

    integers.push_back(0);
    std::cout << "pushing back into std::vector" << std::endl;
    info(integers);

    integers.pop_back();
    std::cout << "poping back from std::vector" << std::endl;
    info(integers);

    return 0;
}
