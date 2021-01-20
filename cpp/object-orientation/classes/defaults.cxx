class Square {
private:
    int side;

public:
    // declaring no default constructor and specifying an overloaded one forces to initialize object with value

    // overloaded constructor
    Square(int length) {
        side = length;
    }
};

class Triangle {
private:
    int edge;
public:
    // default parameter value
    Triangle(int length = 1) {
        edge = length;
    }
};

int main()
{
    /*
    Square sq1; // won't work
    */

    Square sq2(3);
    Triangle tr;

    return 0;
}
