# 01.03.09 *auto* keyword

```cxx
int main()
{
    // types are deduced by compiler at compile time
    auto guess = true; // will be deduced as bool
    auto deduct = 3.1415; // will be deduced as double

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

**auto** type is a way to let compiler deduce a type and replace it in compile type.  
using auto type will make your code a lot easier and shorter, specially when it comes to
iterators, which will be discussed later.

Just like anything in your daily life, type **auto** has its cons too.  
Your code might look easier to read by using type **auto**, but be aware that
using too many *auto* types will make types hard to guess and soon your program will look confusing,
as all types are no longer explicitely visible!

Personally, I always prefer using explicit types, even if they make my code longer and harder to read,
at least I won't end up guessing my variable types. But it's just a matter of taste.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.03.08. *sizeof* keyword](./../../01.the_basics/03.variables&constants/08.sizeof.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.03.10. typeinfo](./../../01.the_basics/03.variables&constants/10.typeinfo.md)

</div>
