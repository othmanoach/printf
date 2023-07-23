#include "main.h"
/**
 * print_int - prints an integer
 * @n: integer to be printed
 * Return: number of digits printed
 */
int print_int(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -n;
	}
	else
		num = n;

	if (num / 10)
		count += print_int(num / 10);

	_putchar((num % 10) + '0');
	count++;

	return (count);
}
/**
 * print_bin - prints a binary number
 * @n: number to be printed
 * Return: number of digits printed
 */
int print_bin(unsigned int n)
{
	int count = 0;

	if (n / 2)
		count += print_bin(n / 2);

	_putchar((n % 2) + '0');
	count++;

	return (count);
}
/**
 * print_address - Prints an address in hexadecimal format
 * @args: The va_list containing the address to be printed
 * Return: The number of characters printed
 */
int print_address(va_list args)
{
	unsigned long int address = va_arg(args, unsigned long int);
	int len = 0;

	len += _puts("0x");
	len += print_HEX(address);

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

	return (len);
}
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

	return (len);
}
/**
 * print_hex - prints an unsigned integer in hexadecimal format
 * @n: The unsigned integer to print
 * @uppercase: Whether to use uppercase letters (X) or lowercase (x)
 * Return: The number of characters printed
 */
int print_hex(unsigned int n, int uppercase)
{
	int len = 0;
	char hex[12]; /* Maximum hexadecimal digits for unsigned int (4294967295) */
	char *hex_chars = uppercase ? "0123456789ABCDEF" : "0123456789abcdef";

	int i = 0;
	while (n != 0)
	{
		hex[i] = hex_chars[n % 16];
		n /= 16;
		i++;
	}

	while (i > 0)
	{
		i--;
		_putchar(hex[i]);
		len++;
	}

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
