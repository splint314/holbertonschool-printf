#include "_printf.h"

/**
* print_string - Prints a string to the standard output
* @s: The string to be printed
*
* Return: The number of characters printed
*/

int print_string(char *s)

{
int i = 0;

if (!s)
s = "(null)";

while (s[i])
{
_putchar(s[i]);
i++;
}
return (i);
}
