#include "main.h"

/**
 * print_string - Prints a string
 * @args: List of arguments containing the string
 *
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int count = 0;

	if (s == NULL)
		s = "(null)";

	while (*s)
	{
		_putchar(*s);
		s++;
		count++;
	}

	return (count);
}
