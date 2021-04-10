class Aggregate1
{
public:
    const char* name;
    int number;
};

struct Aggregate2
{
    int length;
    int array[3];
};

int main()
{
    Aggregate1 agg1 = {"Cxx", 11};
    Aggregate2 agg2 = {1, {2,3,4}};
    return 0;
}
