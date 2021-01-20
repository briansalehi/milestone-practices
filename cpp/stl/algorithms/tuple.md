# 04.03.18 tuple

```cxx
#include <iostream>
#include <string>
#include <tuple>

/*
    tuples can be used like pair
    except they can contain more than two variables
*/
typedef std::tuple<std::string,int,double> Tuple;

void display(const Tuple& tuple) {
    std::cout << "name: " << std::get<0>(tuple) << std::endl;
    std::cout << "precision: " << std::get<1>(tuple) << std::endl;
    std::cout << "value: " << std::get<2>(tuple) << std::endl;
}

int main()
{
    // here is a tuple sample representing: name, precision, value
    Tuple pi("pi", 4, 3.1415);
    Tuple neper = std::make_tuple("neper", 4, 2.7281);

    display(pi);
    display(neper);

    return 0;
}

```

## Output

```txt
name: pi
precision: 4
value: 3.1415
name: neper
precision: 4
value: 2.7281
```

## Comments

no comments

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [04.03.17. pair](./../../04.more_stl/03.algorithms/17.pair.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [04.03.19. regex](./../../04.more_stl/03.algorithms/19.regex.md)

</div>
