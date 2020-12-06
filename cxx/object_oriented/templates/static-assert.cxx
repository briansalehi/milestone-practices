template <typename T>
class Base {
public:
    Base() {
        // assert, if expression is true! that is, let it go if it's true
        static_assert(sizeof(T) == sizeof(int), "type must be int");
    }
};

int main()
{
    /*
        Due to automatic compilation of programs
        in this documentation, all programs must be
        successfully compiled.
        Therefore, to see how static_assert stops
        compilation of this sample, manually change
        type int to type char and then recompile.
    */

    Base<int> sample;
    return 0;
}
