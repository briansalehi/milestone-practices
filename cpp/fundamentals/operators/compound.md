# 01.05.07 compound operators

```cxx
int main()
{
    unsigned short number = 2;

    number += 2; // 4
    number -= 1; // 3
    number *= 10; // 30
    number /= 3; // 10
    number %= 3; // 1
    number &= 0; // 0
    number |= 0xF0; // 0xF0 - 240
    number ^= 0x0F; // 0xFF - 255
    number = ~number; // 0

    return number;
}

```

## Output

no output provided

## Comments *[not verified]*

When arithmetic operators are used with assignment, they can be shortened by compound operators.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.05.06. shifting operators](./../../01.the_basics/05.expressions&statements&operators/06.shifting.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.05.08. sizeof operator](./../../01.the_basics/05.expressions&statements&operators/08.sizeof.md)

</div>
