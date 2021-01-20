#include <iostream>
#include <string>

template <typename result_t, typename parameter_t>
void sum(result_t& result, parameter_t& parameter) {
    result += parameter;
}

// variadic template, so cooool!
template <typename result_t, typename parameter_t, typename ...rest_t>
void sum(result_t& result, parameter_t& parameter, rest_t ...rest) {
    result += parameter;
    return sum(result, rest...);
}

int main()
{
    std::string message;
    sum(message, "Cxx ", "programming ", "is ", "so ", "cool");
    std::cout << message << std::endl;

    return 0;
}
