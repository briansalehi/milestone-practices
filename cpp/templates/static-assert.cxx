template <typename T>
struct Base
{
    Base() {
        // assert, if expression is true! that is, let it go if it's true
        static_assert(sizeof(T) == sizeof(int), "type must be int");
    }
};

int main()
{
    Base<int> object;
    return 0;
}
