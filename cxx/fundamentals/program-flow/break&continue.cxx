#include <iostream>
#include <ctime>

int main()
{
    /*
        due to automatic compilation of practices in this repository, I cannot afford
        guessing a number in a random fashion!
        so I'm going to write this program predictable.
        uncomment following lines to make this program a real random guessing game
    */

    // srand ((time_t)time(0)); 
    // int number = rand () % 100;
    int number = 37;
    int guess = 0, counter = 0;
    
    // infinite loop
    while (true) {
        std::cout << "guest the number: ";
        std::cin >> guess;
        ++counter;

        if (guess < number) {
            std::cout << "your guess is too low!" << std::endl;
        }
        else if (guess > number) {
            std::cout << "your guess is too high!" << std::endl;
        }
        else {
            std::cout << "you found the number in " << counter << " shot(s)!" << std::endl;
            break; // avoid multiple breaks as they are considered poor programming
        }
    }

    return 0;
}
