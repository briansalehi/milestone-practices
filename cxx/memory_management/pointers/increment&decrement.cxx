#include <iostream>

int main()
{
    const size_t length = 3; // const unsigned int
    int *numbers = new int[length];

    // by summing a pointer you can access to different elements of array
    for (size_t iterator = 0; iterator < length; ++iterator) {
        *(numbers + iterator) = iterator;
    }

    for (size_t iterator = 0; iterator < length; ++iterator) {
        std::cout << "Number " << iterator << " : " << *numbers++ << std::endl;
    }

    // incremented pointer must be decremented and set to first block of its memory before deletion
    numbers -= length;
    delete [] numbers;
    return 0;
}
