# 01.07.12 lambda functions

```cxx
#include <iostream>
#include <algorithm>
#include <vector>

void Display(std::vector<int> &container) {
    for_each(container.cbegin(), container.cend(), [](const int elem) { std::cout << elem << " "; });
    std::cout << std::endl;
}

int main()
{
    std::vector<int> container;

    container.push_back(3);
    container.push_back(5);
    container.push_back(1);
    container.push_back(2);
    container.push_back(4);

    Display(container);

    // descending order sort
    sort(container.begin(), container.end(), [](int a, int b) { return(a < b); });
    
    Display(container);

    return 0;
}

```

## Output

```txt
3 5 1 2 4 
1 2 3 4 5 
```

## Comments *[not verified]*

You are already familiar with **vectors**. Though, we never used **for_each** function, but don't worry, we will get there soon.  
We just found a great way to display the elements of a container, that's useful. But what did really happen there?  
**for_each** function gets three arguments, beginning of a container,
end of a container and a function to pass elements of that container one by one.  
So, instead of passing the third argument with a function, instead we created a lambda function on the same line!  
Lambda functions are famous for their small size and simplicity.  
They are functions with no name! that is, they are anonymous functions.  
They are actually called where they are declared.

Don't get too smart with lambda functions.  
They need to be simple and do one small task.  

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.07.11. deduction of types by auto keyword](./../../01.the_basics/07.functions/11.auto.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.08. Pointers and References](./../../01.the_basics/08.pointers&references/README.md)

</div>
