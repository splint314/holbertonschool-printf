#include "main.h"

int print_int(va_list args)
{
	int n = va_arg(args, int);  // ← Change: long → int
	int count = 0;
	char buf[12];  // ← Change: 32 → 12 (suffisant)
	int i = 0;
	unsigned int num;  // ← AJOUTE cette variable

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = (unsigned int)(-n);  // ← Change: utilise unsigned
	}
	else
	{
		num = (unsigned int)n;  // ← AJOUTE cette ligne
	}

	while (num > 0)  // ← Change: n → num
	{
		buf[i++] = '0' + (num % 10);
		num /= 10;  // ← Change: n → num
	}

	while (i > 0)  // ← Change: i-- > 0 → i > 0
	{
		i--;  // ← Décrémente ici
		_putchar(buf[i]);
		count++;
	}

	return (count);
}
