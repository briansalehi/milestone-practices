int main()
{
	int number = 3;
	int& reference = number;
	++reference; // number = 4, reference = 4
	return 0;
}
