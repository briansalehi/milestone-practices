# 02.04.05 equality and inequality operator

```cxx
#include <iostream>

class Date {
private:
    int day, month, year;

public:
    Date(int d, int m, int y): day{d}, month{m}, year{y} {}

    bool operator == (const Date& pair) {
        return (day == pair.day && month == pair.month && year == pair.year);
    }

    bool operator != (const Date& pair) {
        return !(this->operator== (pair));
    }
};

int main()
{
    Date today(17,8,2018);
    Date holiday(17,8,2018);

    if (today == holiday) {
        std::cout << "today is holiday!" << std::endl;
    }
    else {
        std::cout << "today we have a lot of work to do" << std::endl;
    }
        
    return 0;
}

```

## Output

```txt
today is holiday!
```

## Comments *[not verified]*

We see that the operator equality checking **==** checks for equality of days, months and years. This is a correct logic when comparing two dates.  
And notice how we used one operator to implement another.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.04.04. assignment operator](./../../02.object_oriented/04.operators/04.assignment.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.04.06. inequality](./../../02.object_oriented/04.operators/06.inequality.md)

</div>
