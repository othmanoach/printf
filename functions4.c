#include "main.h"
/**
 * print_plus_int - Helper function to print integer with '+' flag
 * @n: Integer to print
 * Return: Number of characters printed
 */
int print_plus_int(int n)
{
	int len = 0;

	if (n >= 0)
		len += _putchar('+');
	len += print_int(n);
	return (len);
}
/**
 * print_space_int - Helper function to print integer with space flag
 * @n: Integer to print
 * Return: Number of characters printed
 */
int print_space_int(int n)
{
	int len = 0;

	if (n >= 0)
		len += _putchar(' ');
	len += print_int(n);
	return (len);
}
/**
 * print_plus_unsigned_int - Helper function
 * to print unsigned integer with '+' flag
 * @n: Unsigned integer to print
 * Return: Number of characters printed
 */
int print_plus_unsigned_int(unsigned int n)
{
	int len = 0;

	len += _putchar('+');
	len += print_unsigned_int(n);
	return (len);
}
/**
 * print_space_unsigned_int - Helper function to
 * print unsigned integer with space flag
 * @n: Unsigned integer to print
 * Return: Number of characters printed
 */
int print_space_unsigned_int(unsigned int n)
{
	int len = 0;

	len += _putchar(' ');
	len += print_unsigned_int(n);
	return (len);
}
