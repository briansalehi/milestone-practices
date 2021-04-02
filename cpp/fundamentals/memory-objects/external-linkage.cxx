#include "external-linkage-usage.hpp"

// global scope, external linkage, definition because of initialization
extern int number = 3;

int main()
{
	display();
    return 0;
}
