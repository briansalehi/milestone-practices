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
