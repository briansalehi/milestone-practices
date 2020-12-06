/*
    to use *auto-deduction* on return type
    of a template function, you need to
    predict that type by function's
    parameters type using *-> decltype()*
    after function declaration.
*/
template <typename T>
auto function(T parameter) -> decltype(parameter) {
    return parameter;
}

int main()
{
    int variable = function<int>(2);

    return 0;
}
