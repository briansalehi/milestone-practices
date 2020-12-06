# 02.01.06 constructor initialization list

```cxx
class Weather {
private:
    int temprature;

public:
    // constructor initialization list
    Weather(int degrees): temprature(degrees) {}
};

int main()
{
    // initialization is mandatory
    Weather rainy(20);

    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

Constructors can have a special way of assigning their parameters to the class members.  
By using initialization lists after constructor parameters and before their body scope, you can skip assignments in body of constructors and directly assign parameters to class members.  

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.01.05. default parameters](./../../02.object_oriented/01.classes&objects/05.defaults.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.01.07. initializer list](./../../02.object_oriented/01.classes&objects/07.initializer_list.md)

</div>
