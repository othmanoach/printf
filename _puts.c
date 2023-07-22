#include "main.h"
/**
* _puts - prints a string, followed by a new line, to stdout
*
* @str: pointer to the string to print
*
* Return: returns 0 on success
*/

int _puts(char *str)
{
	int strLen = 0;

	while (*str)
	{
		_putchar(*str++);
		strLen++;
	}
	return (strLen);
}
