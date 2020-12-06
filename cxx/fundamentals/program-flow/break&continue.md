# 01.06.11 break & continue

```cxx
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

```

## Input

```txt
36
38
37

```

## Output

```txt
guest the number: your guess is too low!
guest the number: your guess is too high!
guest the number: you found the number in 3 shot(s)!
```

## Comments *[not verified]*

**continue** will skip one iteration of a loop, and **break**
will escape from the scope of a loop and stops iteration.

Don't use too many breaks, they make loops hard to follow.  
Programmers expect to read a program from top to bottom and
finally find only one way that ends a loop or program itself.  
Using too many breaks, return and exit statements, make your program's
predictability hard to follow.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.06.10. ranged based for loop](./../../01.the_basics/06.program_flow/10.range_based_for.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.07. Organizing Code with Functions](./../../01.the_basics/07.functions/README.md)

</div>
