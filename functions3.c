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
/**
 * print_unprintable - prints unprintable characters
 * @str: string to print
 * Return: number of characters printed
 */
int print_unprintable(char *str)
{
	int i = 0, len = 0;

	while (str[i])
	{
		if (str[i] < 32 || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			if (str[i] < 16)
			{
				_putchar('0');
				len++;
			}
			len += 2;
			len += print_HEX(str[i]);
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
		i++;
	}
	return (len);
}
/**
 * rot13 - encodes a string using rot13
 * @s: string to encode
 * Return: pointer to encoded string
 */
int rot13(char *s)
{
	int i = 0, j = 0, len = 0;
	char *alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		j = 0;
		while (alpha[j])
		{
			if (s[i] == alpha[j])
			{
				_putchar(rot13[j]);
				len++;
				break;
			}
			j++;
		}
		if (!alpha[j])
		{
			_putchar(s[i]);
			len++;
		}
		i++;
	}
	return (len);
}
/**
 * print_rev - prints a string in reverse
 * @s: string to print
 * Return: number of characters printed
 */
int print_rev(char *s)
{
	int i = 0, len = 0;

	while (s[i])
		i++;
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		len++;
		i--;
	}
	return (len);
}
#include "main.h"
#include <stdarg.h>

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

/**
 * print_hash_octal - Helper function to print octal with '#' flag
 * @num: Unsigned integer to print
 * Return: Number of characters printed
 */
int print_hash_octal(unsigned int num)
{
    int len = 0;

    len += _putchar('0');
    len += print_octal(num);
    return (len);
}

/**
 * print_hash_hex - Helper function to print hexadecimal with '#' flag
 * @num: Unsigned integer to print
 * @uppercase: Whether to print in uppercase (1) or lowercase (0)
 * Return: Number of characters printed
 */
int print_hash_hex(unsigned int num, int uppercase)
{
    int len = 0;

    len += _putchar('0');
    len += _putchar(uppercase ? 'X' : 'x');
    len += print_hex(num, uppercase);
    return (len);
}
