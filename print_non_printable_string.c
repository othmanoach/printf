#include "main.h"
#include <stdarg.h>

/**
 * print_non_printable_string - prints a string with non-printable characters
 * represented as \x followed by the ASCII code in uppercase hexadecimal
 * @str: the string to print
 * Return: the number of characters printed
 */
int print_non_printable_string(char *str)
{
    int len = 0;

    if (str == NULL)
        return _puts("(null)"); // Print "(null)" if the string is NULL

    while (*str)
    {
        if (*str < 32 || *str >= 127) // Check for non-printable characters
        {
            len += _putchar('\\');
            len += _putchar('x');
            len += print_hex(*str, 1); // Print the ASCII code in uppercase hexadecimal
        }
        else
        {
            len += _putchar(*str);
        }
        str++;
    }

    return len;
}
