#include "main.h"
/**
 * _printf - prints anything
 * @format: list of argument types passed to the function
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i = 0, len = 0;
	va_list input;


	if (format == NULL)
		return (-1);

	va_start(input, format);

	if (format[i] == '%' && format[i + 1] == '\0')
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				len += _putchar('%');
			}
			else if (format[i] == 'c')
			{
				len += _putchar(va_arg(input, int));
			}
			else if (format[i] == 's')
			{
				len += _puts(va_arg(input, char *));
			}

		}
		else
		{
			len += _putchar(format[i]);
		}
	}
	va_end(input);
	return (len);
}
