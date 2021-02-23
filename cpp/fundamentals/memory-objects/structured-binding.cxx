int main()
{
	struct { double X, Y, Z; } point;
	point.X = 1; point.Y = 2; point.Z = 3;
	auto [x, y, z] = point; // x, y, z instantiated as double
	return 0;
}
