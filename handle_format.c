#include "main.h"

/**
 * handle_format - handles conversion specifiers
 * @format: format string
 * @args: variadic arguments list
 * @i: current index in the format string
 * @count: current printed characters count
 *
 * Return: updated count
 */
int handle_format(const char *format, va_list args, int i, int count)
{
	char ch;

	if (format[i] == 'c')
	{
		ch = (char)va_arg(args, int);
		_putchar(ch);
		count++;
	}
	else if (format[i] == 's')
	{
		count += print_string(args);
	}
	else if (format[i] == '%')
	{
		_putchar('%');
		count++;
	}
	else if (format[i] == 'd' || format[i] == 'i')
	{
		count += print_int(args);
	}
	else
	{
		_putchar('%');
		_putchar(format[i]);
		count += 2;
	}
	return (count);
}
