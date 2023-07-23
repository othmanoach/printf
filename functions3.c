#include "main.h"
#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <limits.h>
/**
 * print_hex_l - convert decimal to hexadecimal with lowercase
 * @n: The unsigned long int to print
 * Return: The number of characters printed
 */
int print_hex_l(unsigned long int n)
{
	int len = 0;
	char hex[17]; /* Maximum hexadecimal digits for unsigned long int */
	char *hex_chars = "0123456789abcdef";
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
		_putchar(hex[i]); /* Print each hexadecimal digit */
		len++;
	}

	return (len);
}
