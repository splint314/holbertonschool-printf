#include "main.h"

/**
 * print_int - Prints an integer
 * @args: List of arguments containing the integer
 *
 * Return: Number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;
	char buf[12];
	int i = 0;
	unsigned int num;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = (unsigned int)(-n);
	}
	else
	{
		num = (unsigned int)n;
	}

	while (num > 0)
	{
		buf[i] = (num % 10) + '0';
		i++;
		num /= 10;
	}

	while (i > 0)
	{
		i--;
		_putchar(buf[i]);
		count++;
	}

	return (count);
}
