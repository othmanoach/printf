#include "main.h"
#include <stdarg.h>

/**
 * print_unsigned - prints an unsigned integer
 * @n: The unsigned integer to print
 * Return: The number of characters printed
 */
int print_unsigned(unsigned int n)
{
	int len = 0;

	if (n / 10)
		len += print_unsigned(n / 10);

	_putchar(n % 10 + '0');
	len++;

	return len;
}
