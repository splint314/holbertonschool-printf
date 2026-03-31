#include "main.h"

/**
* print_string - Prints a string to the standard output
* @s: The string to be printed
*
* Return: The number of characters printed
*/

int print_string(char *s)

{
	int i, count;

	if (s == NULL)
	s = "(null)";

	i = 0;
	count = 0;

	while (s[i] != '\0')
	{
		write(1, &s[i], 1);
		i++;
		count++;
	}

	return (count);
}
