#include <stdio.h>
#include <putchar.c>

void print_string(const char *s)
{
    int i = 0;

    while (s[i] != '\0')  // on parcourt jusqu'au caractère de fin
    {
        _putchar(s[i]);
        i++;
    }
}

int main(void)
{
    print_string("Hello World");
    return 0;
}