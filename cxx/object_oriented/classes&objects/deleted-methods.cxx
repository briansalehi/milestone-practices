class Base {
public:
    Base(): number{0} {};
    Base(int input): number{input} {};
    Base(Base& base) = delete; // cannot be used
    Base& operator= (Base& base) = delete; // cannot be used

private:
    int number;
};

int main()
{
    Base alpha(3);
    /*
    Base beta = alpha; // not permited!
    */

    return 0;
}
