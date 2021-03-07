# 01.03.03 string declaration

```c
int main(void)
{
    char* deduced = "this is a string with a length deduced by compiler.\n";
    char fixed[43] = "this string can only hold 43 characters.\n";

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

Strings are nothing but an array of type char, that is **char star** type.

Notice that there is a difference between:

```c
char letter = 'A';
```

and

```c
char* letter = "A";
```

The former is just a character but the latter is not just one character, but it's an array of two characters: 'A' and '\n'.

### Quick Access

<div class="quick_access">
<div class="previous_page" style="float:left">

#### &#8592; Previous Page

* [01.03.02. array usage](./../../01.the_basics/03.arrays_strings/02.array-usage.md)

</div>
<div class="next_page" style="float:right">

#### &#8594; Next Page

* [01.03.04. strlen](./../../01.the_basics/03.arrays_strings/04.strlen.md)

</div>
</div>
