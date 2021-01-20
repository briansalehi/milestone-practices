const double pi = 3.1415;

double Volume(double r, double h)
{
    return pi*r*r*h;
}

int main()
{
    int radius = 1, height = 3;

    int volume = Volume(radius, height);

    return 0;
}
