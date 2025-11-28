#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: number of characters printed, or -1 on error
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i = 0, count = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);

	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			count++;
			i++;
			continue;
		}

		i++;

		if (format[i] == '\0')
		{
			va_end(args);
			return (-1);
		}

		count = handle_format(format, args, i, count);
		i++;
	}

	va_end(args);
	return (count);
}
