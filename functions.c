#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <limits.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
/**
* _puts - prints a string, followed by a new line, to stdout
*
* @str: pointer to the string to print
*
* Return: returns 0 on success
*/

int _puts(char *str)
{
	int strLen = 0;

	while (*str)
	{
		_putchar(*str++);
		strLen++;
	}
	return (strLen);
}
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
 * print_mem_address - Prints an address in hexadecimal format
 * @args: The va_list containing the address to be printed
 * Return: The number of characters printed
 */
int print_mem_address(va_list args)
{
	unsigned long int address = va_arg(args, unsigned long int);
	int len = 0;

	len += _puts("0x");
	len += print_HEX(address);

	return (len);
}
