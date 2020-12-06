# 01.02.08 get

```cxx
#include <iostream>

int main()
{
    char message[30];
    std::cout << "Enter a short message: ";
    std::cin >> message;
    std::cout << "message: " << message << std::endl;
    return 0;
}

```

## Input

```txt
you will see this shortly.

```

## Output

```txt
Enter a short message: message: you
```

## Comments *[not verified]*

To get input from user, you need to get data from input stream using **get()** function
or other ones discussing later.

Notice that input message is not completely received over input buffer.  
This is because of space character which is interpreted as the end of the input data.  
To fix this kind of issue, we need to use another function which gets a complete line.  
We will be using this kind of function in excersises ahead.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.02.07. cout options](./../../01.the_basics/02.the_anatomy/07.cout.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.02.09. getline](./../../01.the_basics/02.the_anatomy/09.getline.md)

</div>
