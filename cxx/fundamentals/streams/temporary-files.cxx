#include <iostream>
#include <cstdio>

int main()
{
    std::cout << "my system can generate " << TMP_MAX
              << " temporary files with " << L_tmpnam
              << " characters long name\n";

    char tempfile[L_tmpnam] = {'\n'};
    for (int index = 0; index < 3; ++index) {
        mkstemp(tempfile);
        std::cout << tempfile << std::endl;
    }

    return 0;
}
