#include "main.h"

/**
* print_int - Prints an integer to the standard output
* @n: The integer to be printed
* Return: The number of characters printed
*/

int print_int(int n)

{
	unsigned int num;
	int count;

	count = 0;

	if (n < 0)
	{
		write(1, "-", 1);
		count++;
		num = -n;
	}
	else
		num = n;

	if (num >= 10)
		count += print_int(num / 10);
	count += print_char((num % 10) + '0');

	return (count);
}
