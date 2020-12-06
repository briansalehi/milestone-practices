int main()
{
    // the address which the pointer is pointing to, can not be changed
    int days = 30;
    int* const pdays = &days;

    // the value which the pointer is pointing to, can not be changed
    int months = 12;
    const int* pmonths = &months;

    // the most restrict pointer, nothing can be changed
    int weeks = 4;
    const int* const pweeks = &weeks;

    return 0;
}
