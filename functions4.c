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
