# 02.01.13 stack prohibition

```cxx
class Database {
private:
    // private destructor, prohibits instantiation on stack
    ~Database() {}

public:
    static void destruct(Database* object) {
        delete object;
    }
};

int main()
{
    /*
    Database db; // on stack
    */

    Database* db = new Database; // on heap
    Database::destruct(db);
    return 0;
}

```

## Output

no output provided

## Comments *[not verified]*

Declaring **destructor** as a private method, prevents an object from being created on the stack, but can only be available on the heap.  
That is, object cannot be created on compile-time, but it can be created on run-time.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [02.01.12. singleton object](./../../02.object_oriented/01.classes&objects/12.singleton.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [02.01.14. type conversion](./../../02.object_oriented/01.classes&objects/14.conversion.md)

</div>
