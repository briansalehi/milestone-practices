// template function, can also be used inline or constexpr
template <typename T>
constexpr const T getMax(T input1, T input2)
{
    return (input1 > input2) ? input1 : input2;
}

// template class
template <typename T>
class Base
{
public:
    Base(T input): member(input) {}

private:
    T member;
};

int main()
{
	// using template function, template initialization is optional
    int maxInt = getMax<int>(42, 68);
   	double maxDouble = getMax(3.1415, 3.14159);

	// using template class
    Base<const char*> language("C++");
    Base<int> number(14);

    return 0;
}
