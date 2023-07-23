#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
 * get_specifier - helper function for _printf
 * @specifier: format specifier
 * @input: input list
 * Return: number of characters printed
 */
int get_specifier(char specifier, va_list input)
{
	int len = 0;

	if (specifier == '%')
		len += _putchar('%'); /* if format is %% print % */
	else if (specifier == 'c')
		len += _putchar(va_arg(input, int)); /* if format is %c print char */
	else if (specifier == 's')
		len += _puts(va_arg(input, char *)); /* if format is %s print string */
	else if (specifier == 'd' || specifier == 'i')
		len += print_int(va_arg(input, int)); /* if format is %d or %i print int */
	else if (specifier == 'u')
		len += print_unsigned_int(va_arg(input, unsigned int));
		/* Handle %u directly within _printf */
	else if (specifier == 'o')
		len += print_octal(va_arg(input, unsigned int));
		/* Handle %o directly within _printf */
	else if (specifier == 'x' || specifier == 'X')
		len += print_hex(va_arg(input, unsigned int), specifier == 'X');
		/* Handle %x or %X directly within _printf */
	else if (specifier == 'p')
		len += print_mem_address(input); /* Handle %p directly within _printf */
	else if (specifier == 'b')
		len += print_bin(va_arg(input, unsigned int));
		/* if format is %b print binary */
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
			len += get_specifier(format[i], input);
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
