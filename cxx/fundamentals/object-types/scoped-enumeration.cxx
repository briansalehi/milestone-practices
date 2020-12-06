enum class Colors {
	RED, GREEN, BLUE
};

int main()
{
    /*
    int red = (int)RED; // error: RED does not exist!
    */

    int green = (int)Colors::GREEN; // GREEN will only be visible when its scope is specified

    return 0;
}
