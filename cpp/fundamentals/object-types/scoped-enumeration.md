# 01.03.16 scoped enumeration

```cxx
enum class Colors {RED, GREEN, BLUE};

int main()
{
    /*
    int red = (int)RED; // error: RED does not exist!
    */

    int green = (int)Colors::GREEN; // GREEN will only be visible when its scope is specified

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

C-style enumerations are defined with **enum** and their members are visible globally!  
It is a good idea to never use globals as they may give you conflict errors and some other troubles.  
If you use **enum class**, all enumeration members will only be visible in their scope and to use them
you should specify their scope name following by scope resolution, *scope::member*.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.03.15. global enumerations](./../../01.the_basics/03.variables&constants/15.global-enumeration.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.03.17. *define* keyword](./../../01.the_basics/03.variables&constants/17.define.md)

</div>
