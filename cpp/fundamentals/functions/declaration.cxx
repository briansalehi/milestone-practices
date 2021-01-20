const double pi = 3.141592;

// function declaration
double Area(double r);
double Circumference(double r);

int main()
{
    double radius = 2;
    double area = Area(radius);
    double circumference = Circumference(radius);

    return 0;
}

// function definition
double Area(double r) { return pi * r * r; }
double Circumference(double r) { return 2 * pi * r; }
