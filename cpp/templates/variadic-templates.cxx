#include <iostream>

template <typename T>
constexpr T sum(T result)
{
	return result;
}

template <typename T, typename ...R>
constexpr T sum(T result, R ...rest)
{
    return result + sum(rest...);
}

int main()
{
    int result = sum(1,2,3,4);
    std::cout << result << std::endl;
    return 0;
}
