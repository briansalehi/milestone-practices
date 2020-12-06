# 02.04.04 assignment operator

```cxx
#include <iostream>

class Date {
private:
    int day, month, year;

public:
    Date(int d, int m, int y): day{d}, month{m}, year{y} {}

    Date operator -= (int inday) {
        day -= inday;
        return *this;
    }

    Date operator += (int inday) {
        day += inday;
        return *this;
    }

    void show() {
        std::cout << day << "/" << month << "/" << year << std::endl;
    }
};

int main()
{
    Date today(15,8,2018);
    today.show();
    today += 5;
    today.show();
    
    return 0;
}

```

## Output

```txt
15/8/2018
20/8/2018
```

## Comments *[not verified]*

Operators **-=**, **+=** and similar can be overloaded in a class.  
Notice that this class is far away from being a perfect date class, days can exceed 31 and values are not controlled. So just take advantage of learning operator overloading not implementing a date class.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.04.03. conversion operators](./../../02.object_oriented/04.operators/03.stream.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.04.05. equality and inequality operator](./../../02.object_oriented/04.operators/05.equality.md)

</div>
