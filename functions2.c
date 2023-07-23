#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <limits.h>
/**
 * print_HEX - Prints a hexadecimal number recursively
 * @n: The number to be printed
 * Return: The number of characters printed
 */
int print_HEX(unsigned int n)
{
	int len = 0;

	if (n > 15)
		len += print_HEX(n / 16);
	if (n % 16 < 10)
		len += _putchar(n % 16 + '0');
	else
		len += _putchar(n % 16 - 10 + 'A');
	return (len);
}
/**
 * print_unsigned_int - prints an unsigned integer
 * @n: The unsigned integer to print
 * Return: The number of characters printed
 */
int print_unsigned_int(unsigned int n)
{
	int len = 0;

	if (n / 10)
		len += print_unsigned_int(n / 10);

	_putchar(n % 10 + '0');
	len++;

	return (len);
}
/**
 * print_hex - prints an unsigned integer in hexadecimal format
 * @n: The unsigned integer to print
 * @uppercase: Whether to use uppercase letters (X) or lowercase (x)
 * Return: The number of characters printed
 */
int print_hex(unsigned int n)
{
	int len = 0;

	if (n > 15)
		len += print_hex(n / 16);
	if (n % 16 < 10)
		len += _putchar(n % 16 + '0');
	else
		len += _putchar(n % 16 - 10 + 'a');
	return (len);
}
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

	return (len);
}
