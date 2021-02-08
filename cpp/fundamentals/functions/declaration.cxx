const double pi = 3.141592;

// function declaration
double Area(double);
double Circumference(double);

int main()
{
    double radius = 2;
    double area = Area(radius);
    double circumference = Circumference(radius);

    return 0;
}

// function definition
double Area(double radius) { return pi * radius * radius; }
double Circumference(double radius) { return 2 * pi * radius; }
