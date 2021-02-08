bool isEven(const int number)
{
	if ((number % 2) == 0) {
		return true;
	} else {
		return false;
	}
}

int main()
{
	isEven(2); // true
	isEven(3); // false
    return 0;
}
