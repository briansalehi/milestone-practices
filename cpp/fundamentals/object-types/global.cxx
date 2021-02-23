// global variables are defined in the biggest scope
int global = 10;

int main()
{
    int local = 20;
	// homonym local scope variables hide global variables
	int global = 30;
    return 0;
}
