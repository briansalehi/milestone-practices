void function() {
    // only accessible in function block, local scope but statically always exists in memory
    static int number = 3;
}

int main()
{
    function();
    return 0;
}
