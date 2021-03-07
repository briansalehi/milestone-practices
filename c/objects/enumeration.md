# 01.02.05 enumeration

```c
enum traffic_light {
    RED = 1,
    YELLOW = 2,
    GREEN = 3
};

int main(void)
{
    enum traffic_light light = RED;

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

There are 4 types of constants in C:

*    literal constants
*    define preprocessor
*    const keyword
* => enumeration

Enumerations are declared as of type int but their elements are not of type int.  
This means you cannot compare them with integers or even assign them to any of them.  
To assign an enum element into a variable of type int, you must convert it to type int first.
conversions are discussed in later chapters.

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.02.04. const keyword](./../../01.the_basics/02.variables_constants/04.const.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.02.06. sizeof operator](./../../01.the_basics/02.variables_constants/06.sizeof.md)

</div>
</div>
