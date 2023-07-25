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

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
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
/**
 * print_plus_int - Helper function to print integer with '+' flag
 * @num: Integer to print
 * Return: Number of characters printed
 */
int print_plus_int(int num)
{
    int len = 0;

    if (num >= 0)
        len += _putchar('+');
    len += print_int(num);
    return (len);
}

/**
 * print_space_int - Helper function to print integer with space flag
 * @num: Integer to print
 * Return: Number of characters printed
 */
int print_space_int(int num)
{
    int len = 0;

    if (num >= 0)
        len += _putchar(' ');
    len += print_int(num);
    return (len);
}

/**
 * print_plus_unsigned_int - Helper function to print unsigned integer with '+' flag
 * @num: Unsigned integer to print
 * Return: Number of characters printed
 */
int print_plus_unsigned_int(unsigned int num)
{
    int len = 0;

    len += _putchar('+');
    len += print_unsigned_int(num);
    return (len);
}

/**
 * print_space_unsigned_int - Helper function to print unsigned integer with space flag
 * @num: Unsigned integer to print
 * Return: Number of characters printed
 */
int print_space_unsigned_int(unsigned int num)
{
    int len = 0;

    len += _putchar(' ');
    len += print_unsigned_int(num);
    return (len);
}
