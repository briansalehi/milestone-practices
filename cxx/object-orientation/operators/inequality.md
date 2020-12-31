# 02.04.06 inequality

```cxx
#include <iostream>

class Date {
private:
    int day, month, year;

public:
    Date(int d, int m, int y): day{d}, month{m}, year{y} {}

    bool operator< (const Date& pair) {
        if (year < pair.year) {
            return true;
        }
        else if (month < pair.month) {
            return true;
        }
        else if (day < pair.day) {
            return true;
        }
        else {
            return false;
        }
    }
};

int main()
{
    Date today (15,8,2018);
    Date holiday (17,8,2018);

    if (today < holiday) {
        std::cout << "holiday is coming soon!" << std::endl;
    }
    else {
        std::cout << "you missed holiday!" << std::endl;
    }
        
    return 0;
}

```

## Output

```txt
holiday is coming soon!
```

## Comments *[not verified]*

Comparing two objects to see which is lower than another requires a correct logic for implementation of operator **<** and **>**.  
Comparing year, month and day respectively is a simple logic, this implementation is far away from being a perfect comparison operator.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.04.05. equality and inequality operator](./../../02.object_oriented/04.operators/05.equality.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.04.07. copy operator](./../../02.object_oriented/04.operators/07.copy.md)

</div>
