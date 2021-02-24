class Weather {
private:
    int temprature;

public:
    // constructor initialization list
    Weather(int degrees): temprature(degrees) {}
};

int main()
{
    // initialization is mandatory
    Weather rainy(20);
    return 0;
}
