# 02.01.02 abstraction

```cxx
#include <iostream>

class Army {
private: // abstraction
    int reinforcement = 150000;

public: // abstraction
    void report() {
        std::cout << "there are " << reinforcement << " reinforcement in the army" << std::endl;
    }

    void join(int men) {
        std::cout << "joining " << men << " reinforcement to the army" << std::endl;
        reinforcement += men;
    }
};

int main()
{
    Army forces;
    forces.report();
    forces.join(50000);
    forces.report();

    return 0;
}

```

## Output

```txt
there are 150000 reinforcement in the army
joining 50000 reinforcement to the army
there are 200000 reinforcement in the army
```

## Comments *[not verified]*

Abstraction is the access level to object members. Object members can be accessed from different scopes based on their abstraction.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.01.01. encapsulation](./../../02.object_oriented/01.classes&objects/01.encapsulation.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.01.03. constructor](./../../02.object_oriented/01.classes&objects/03.constructor.md)

</div>
