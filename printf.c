#include <stdio.h>
#include <stdargs.h>
#include <stdlib.h>
#include "main.h"
#include <unistd.h>

/**
 * helper_func - helper function for _printf
 * @format: format specifier
 * @input: input list
 * Return: number of characters printed
 */
int helper_func(char specifier, va_list input)
{
	int len = 0;

	if (specifier == '%')
	{
		len += _putchar('%');
	}
	else if (specifier == 'c')
	{
		len += _putchar(va_arg(input, int));
	else if (specifier == 's')
	{
		len += _puts(va_arg(input, char *));
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
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);

	va_start(input, format);

	while (format && format[i])
	{
		if (format[i] == '%')
		{
			i++;
			len =+ helper_func(format[i], input);
		}
		else
		{
			len += _putchar(format[i]);
		}
		i++;
	}
	va_end(input);
	return (len);
}
