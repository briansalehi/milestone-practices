# 01.08.07 memory leakage

```cxx
int* forgetToDelete();
void overwritingPointer();
void deleteUnordered();

int main()
{
    /*
        memory leakage happens when you allocate memory on heap
        and forget to deallocate it after use
    */

    forgetToDelete(); // pointer not assigned to be deleted, therefore leaks int[100]
    overwritingPointer();
    deleteUnordered();

    return 0;
}

// scenario 1
int* forgetToDelete() {
    int* numbers = new int[100];
    return numbers;
}

// scenario 2
void overwritingPointer() {
    int* numbers = new int[100];
    numbers = new int[50]; // new memory overwrites the previous without first removing it, therefore leaks int[100]
    delete [] numbers;
}

// scenario 3
void deleteUnordered() {
    int* memory1 = new int[100];
    int* memory2 = new int[50];
    delete memory2; // deletes int[50] but there's no way to delete int[100] on heap anymore, therefore leaks int[100]
    delete memory1; // this should have been deleted first
}

```

## Output

no output provided

## Comments *[not verified]*

Do not allocate new memory until you delete the previously allocated one. By allocating new block of memory after another, you will lose access to the first allocated block forever.

### Quick Access

<div class="previous_page pagination">

#### &#8592; Previous Page

* [01.08.06. passing parameters as pointers](./../../01.the_basics/08.pointers&references/06.passing.md)

</div>
<div class="next_page pagination">

#### &#8594; Next Page

* [01.08.08. pointing to invalid memory](./../../01.the_basics/08.pointers&references/08.invalid.md)

</div>
