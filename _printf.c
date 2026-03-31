#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: format string to print
 *
 * Return: number of characters printed, or -1 on error
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i, count;

	if (format == NULL)
		return (-1);
	va_start(ap, format);
	i = 0;
	count = 0;
	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			count += print_char(format[i]);
			i++;
		}
		else
		{
			if (format[i + 1] == '\0')
			{
				va_end(ap);
				return (-1);
			}
			if (format[i + 1] == 'c')
				count += print_char(va_arg(ap, int));
			else if (format[i + 1] == 's')
				count += print_string(va_arg(ap, char *));
			else if (format[i + 1] == '%')
				count += print_char('%');
			else if (format[i + 1] == 'd' || format[i + 1] == 'i')
				count += print_int(va_arg(ap, int));
			else
			{
				count += print_char('%');
				count += print_char(format[i + 1]);
			}
			i += 2;
		}
	}
	va_end(ap);
	return (count);
}
