int main(void)
{
    const char *message = "this is a string with a length deduced by compiler.\n";
    const char fixed[43] = "this string can only hold 43 characters.\n"; /* of course with \0 at the end */
    return 0;
}
