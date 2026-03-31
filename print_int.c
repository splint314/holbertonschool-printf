#include "_printf.h"

/**
* print_int - Prints an integer to the standard output
* @n: The integer to be printed
* Return: The number of characters printed
*/

int print_int(int n)

{
int count = 0;

if (n < 0)

count += write;
n = -n;

if (n < 0)
{
count += write('-');
n = -n;
}

return (count);
}
