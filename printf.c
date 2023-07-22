#include "main.h"

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
		len += _putchar('%'); /* if format is %% print % */
	}
	else if (specifier == 'c')
	{
		len += _putchar(va_arg(input, int)); /* if format is %c print char */
	}
	else if (specifier == 's')
	{
		len += _puts(va_arg(input, char *)); /* if format is %s print string */
	}
	return (len);
}

void print_buffer(char buffer[], int *buff_ind);

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
			len =+ helper_func(format[i], input);
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
/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 */
void print_buffer(char buffer[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buffer[0], *buff_ind);

	*buff_ind = 0;
}
