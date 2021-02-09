const double pi = 3.14159;

void Area(double radius, double& area)
{
    area = pi * radius * radius;
}

int main()
{
    double radius = 2, area = 0;
    Area(radius, area);
    return 0;
}
