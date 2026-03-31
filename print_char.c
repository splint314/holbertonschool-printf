#include "main.h"

/**
*print_char - Prints a single character to the standard output
* @c: The character to be printed
*
* Return: 1 on success, -1 on error
*/
int print_char(int c)
{
	write(1, &c, 1);
	return (1);
}
