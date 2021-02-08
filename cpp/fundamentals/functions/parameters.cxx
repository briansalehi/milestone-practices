const double pi = 3.1415;

double cylinderVolume(double radius, double height)
{
    return pi * radius * radius * height;
}

int main()
{
    int radius = 1, height = 3;

    int volume = cylinderVolume(radius, height);

    return 0;
}
