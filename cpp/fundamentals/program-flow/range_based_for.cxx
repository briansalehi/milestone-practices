#include <iostream>

int main()
{
    int array[] = {1,2,3,4,5};
    int factorial = 1;

    for (int element: array) {
        factorial *= element;
    }

    std::cout << factorial << std::endl;

    return factorial;
}
