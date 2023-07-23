#include "main.h"
/**
 * print_int - prints an integer
 * @n: integer to be printed
 * Return: number of digits printed
 */
int print_int(int n)
{
	int count = 0;
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		count++;
		num = -n;
	}
	else
		num = n;

	if (num / 10)
		count += print_int(num / 10);

	_putchar((num % 10) + '0');
	count++;

	return (count);
}