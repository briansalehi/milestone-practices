template <typename T>
class Base {
public:
    Base(T input): member(input) {}
private:
    T member;
};

template <>
class Base<int> {
public:
    Base(int input): member(input) {}
private:
    int member;
};

int main()
{
    Base<double> fraction(3.14159);
    Base<int> integer(14);
    return 0;
}
