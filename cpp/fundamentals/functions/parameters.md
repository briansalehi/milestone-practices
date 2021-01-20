# 01.07.02 multiple parameters

```cxx
const double pi = 3.1415;

double Volume(double r, double h)
{
    return pi*r*r*h;
}

int main()
{
    int radius = 1, height = 3;

    int volume = Volume(radius, height);

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

Considering the design of a clean code, a function should not have more than
two arguments, at most three.  
What you usually try to give to a function can be put in a larger structure.  
Say, you want to give a function three variables: book_title, book_pages, book_price  

```cxx
void function(const char* book_title, int book_pages, int book_price);
```

Instead, you can create a structure named **book** containing:  

```cxx
struct class Book {
    char* title;
    int pages;
    int price;
} book;
```

And call the function with one argument:

```cxx
void function(const Book book) {
    // do something with book.title, book.pages, book.price
}
```

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.07.01. function declaration](./../../01.the_basics/07.functions/01.declaration.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.07.03. no returning value functions](./../../01.the_basics/07.functions/03.void.md)

</div>
