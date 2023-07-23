#include "main.h"
#include <stdarg.h>

/**
 * print_octal - prints an unsigned integer in octal format
 * @n: The unsigned integer to print
 * Return: The number of characters printed
 */
int print_octal(unsigned int n)
{
	int len = 0;
	char octal[12]; /* Maximum octal digits for unsigned int (4294967295) */

	int i = 0;
	while (n != 0)
	{
		octal[i] = (n % 8) + '0';
		n /= 8;
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar(octal[i]);
		len++;
	}

	return len;
}
