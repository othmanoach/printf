#include "main.h"
#include <stdarg.h>

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

	return len;
}
