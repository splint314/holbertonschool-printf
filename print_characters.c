#include "main.h"

/**
 * print_char - Prints a single character
 * @args: List of arguments containing the character
 *
 * Return: Number of characters printed (always 1)
 */
int print_char(va_list args)
{
	char c;

	c = (char)va_arg(args, int);
	_putchar(c);

	return (1);
}
