#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * helper_func - helper function for _printf
 * @specifier: format specifier
 * @input: input list
 * @flag_plus: flag for '+'
 * @flag_space: flag for ' '
 * @flag_hash: flag for '#'
 * Return: number of characters printed
 */
int helper_func(char specifier, va_list input, int flag_plus
, int flag_space, int flag_hash)
{	int len = 0;

	if (specifier == '%')
		len += _putchar('%');
	else if (specifier == 'c')
		len += _putchar(va_arg(input, int));
	else if (specifier == 's')
		len += _puts(va_arg(input, char *));
	else if (specifier == 'd' || specifier == 'i')
	{flag_plus ? len += print_plus_int(va_arg(input, int)) : 0;
	flag_space ? len += print_space_int(va_arg(input, int)) : 0;
	(!flag_plus && !flag_space) ? print_int(va_arg(input, int)) : 0; }
	else if (specifier == 'u')
		{flag_plus ? len += print_plus_unsigned_int(va_arg(input, unsigned int)) : 0;
		flag_space ? len +=
		print_space_unsigned_int(va_arg(input, unsigned int)) : 0;
		(!flag_plus && !flag_space) ?
		print_unsigned_int(va_arg(input, unsigned int)) : 0; }
	else if (specifier == 'o')
		{flag_hash ? len += _putchar('0') : 0;
		len += print_octal(va_arg(input, unsigned int)); }
	else if (specifier == 'x')
		{flag_hash ? len += _puts("0x") : 0;
		len += print_hex(va_arg(input, unsigned int)); }
	else if (specifier == 'X')
		{flag_hash ? len += _puts("0X") : 0;
		len += print_HEX(va_arg(input, unsigned int)); }
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
		{len += _putchar('%'); /* print the '%' character itself */
		len += _putchar(specifier); /* print the unrecognized format specifier */}
	return (len); }

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
			int flag_plus = 0, flag_space = 0, flag_hash = 0;

			i++;
			while (format[i] == '+' || format[i] == ' ' || format[i] == '#')
			{
				if (format[i] == '+')
					flag_plus = 1;
				else if (format[i] == ' ')
					flag_space = 1;
				else if (format[i] == '#')
					flag_hash = 1;

				i++;
			}
			len += helper_func(format[i], input, flag_plus, flag_space, flag_hash);
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
