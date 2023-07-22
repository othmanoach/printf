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
			if (format[i] == '%')
			{
				len += _putchar('%'); /* if format is %% print % */
			}
			else if (format[i] == 'c')
			{
				len += _putchar(va_arg(input, int)); /* if format is %c print char */
			}
			else if (format[i] == 's')
			{
				len += _puts(va_arg(input, char *)); /* if format is %s print string */
			}
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
