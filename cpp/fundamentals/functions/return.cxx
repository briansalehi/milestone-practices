#include <iostream>

void Talk()
{
    char answer = 'n';

    std::cout << "would you like to see a message (y/n)? ";
    std::cin >> answer;
    std::cout << answer << std::endl;

    /*
        in this case, multiple return statements could simply be avoided
        by checking if (answer == 'y') while answer is initialized by 'n'
    */
    if (answer == 'n') {
        return;
    }
    
    std::cout << "inbox is empty!" << std::endl;
    
    return;
}

int main()
{
    Talk();

    return 0;
}
