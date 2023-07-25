#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * helper_func - helper function for _printf
 * @specifier: format specifier
 * @input: input list
 * Return: number of characters printed
 */
int helper_func(char specifier, va_list input)
{
	int len = 0;

	if (specifier == '%')
		len += _putchar('%');
	else if (specifier == 'c')
		len += _putchar(va_arg(input, int));
	else if (specifier == 's')
		len += _puts(va_arg(input, char *));
    else if (specifier == 'd' || specifier == 'i')
    {
        int num = va_arg(input, int);
        if (flag_plus)
            len += print_plus_int(num);
        else if (flag_space)
            len += print_space_int(num);
        else
            len += print_int(num);
    }
	else if (specifier == 'u')
		len += print_unsigned_int(va_arg(input, unsigned int));
	else if (specifier == 'o')
		len += print_octal(va_arg(input, unsigned int));
	else if (specifier == 'x')
		len += print_hex(va_arg(input, unsigned int));
	else if (specifier == 'X')
		len += print_HEX(va_arg(input, unsigned int));
	else if (specifier == 'p')
		len += print_mem_address(va_arg(input, void *));
	else if (specifier == 'b')
		len += print_bin(va_arg(input, unsigned int));
	else if (specifier == 'S')
		len += print_unprintable(va_arg(input, char *));
	else if (specifier == 'R')
		len += rot13(va_arg(input, char *));
	else if (specifier == 'r')
		len += print_rev(va_arg(input, char *));
	else
	{
		len += _putchar('%'); /* print the '%' character itself */
		len += _putchar(specifier); /* print the unrecognized format specifier */
	}
	return (len);
}
/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	va_list input;

	if (!format || (format[0] == '%' && !format[1]))
		return (-1); /* if format is null or if format is % return -1 */
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1); /* if format is % return -1 */

	va_start(input, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len += helper_func(format[i], input);
		}
		else
		{
			len += _putchar(format[i]); /* if format is not % print char */
		}
		i++;
	}

	va_end(input);
	return (len);
}
