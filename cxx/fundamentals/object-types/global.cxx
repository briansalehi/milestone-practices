// global variables are defined in the biggest scope
int global = 10;

int main()
{
    int local = 20;

    return 0;
}

/*
    use global variables only if you do know exactly what you are doing
    generally using global variables in large applications is considered
    poor design.
*/
