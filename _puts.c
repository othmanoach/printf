#include "main.h"
/**
* _puts - prints a string, followed by a new line, to stdout
*
* @str: pointer to the string to print
*
* Return: void
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
