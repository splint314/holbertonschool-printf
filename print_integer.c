#include "main.h"

int print_int(va_list args)
{
	long n = va_arg(args, int);
	int count = 0;
	char buf[32];
	int i = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	while (n > 0)
	{
		buf[i++] = '0' + (n % 10);
		n /= 10;
	}

	while (i-- > 0)
	{
		_putchar(buf[i]);
		count++;
	}

	return (count);
}

