#include "_printf.h"

/**
*print_char - Prints a single character to the standard output
* @c: The character to be printed
*
* Return: 1 on success, -1 on error
*/
int print_char(int c)
{
if (write(c) == -1)
return (-1);
return (1);
}
