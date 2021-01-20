#include <iostream>

void Display(const int arr[], const size_t len) {
    for (size_t i = 0; i < len; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main()
{
    const size_t length = 10;
    int array[length] = {0};
    array[4] = 1;
    array[9] = 1;

    Display(array, length);

    return 0;
}
