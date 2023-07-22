#include "main.h"
/**
 * get_specifier - gets the specifier
 * @format: list of argument types passed to the function
 * @input: list of arguments passed to the function
 * @i: pointer to the index of format
 * @len: pointer to the number of characters printed
 * Return: void
 */
int get_specifier(char c, va_list input)
{
	int len = 0;

	if (c == 'c')
		len += _putchar(va_arg(input, int));
	else if (c == 's')
		len += _puts(va_arg(input, char *));
	else if (c == '%')
		len += _putchar('%');
	else
	{
		len += _putchar('%');
		len += _putchar(c);
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
	int i = 0 , len = 0;
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
			get_specifier(format[i], input);
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
