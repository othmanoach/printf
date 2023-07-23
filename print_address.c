#include "main.h"
#include <stdio.h>

/**
 * print_address - Prints an address in hexadecimal format
 * @args: The va_list containing the address to be printed
 * Return: The number of characters printed
 */
int print_address(va_list args)
{
	void *address = va_arg(args, void *);
	unsigned long int num = (unsigned long int)address;
	int len = 0;

	_putchar('0');
	_putchar('x');
	len += 2;

	if (num == 0)
	{
		_putchar('0');
		len++;
	}
	else
	{
		len += print_HEX(num);
	}

	return (len);
}
/**
 * print_HEX - Prints a hexadecimal number recursively
 * @n: The number to be printed
 * Return: The number of characters printed
 */
int print_HEX(unsigned long int n)
{
	int len = 0;
	char hex_digit;

	if (n == 0)
		return (0);

	len += print_HEX(n / 16);

	hex_digit = (n % 16 < 10) ? (n % 16 + '0') : (n % 16 - 10 + 'a');
	_putchar(hex_digit);

	return (1 + len);
}
