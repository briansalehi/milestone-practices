int main()
{
    unsigned short number = 2;

    number += 2; // 4
    number -= 1; // 3
    number *= 10; // 30
    number /= 3; // 10
    number %= 3; // 1
    number &= 0; // 0
    number |= 0xF0; // 0xF0 - 240
    number ^= 0x0F; // 0xFF - 255
    number = ~number; // 0

    return number;
}
