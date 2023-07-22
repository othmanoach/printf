#include <stdio.h>
#include "main.h"

int main()
{
	int len = 0, len2 = 0;

	len = _printf("Percent:[%%]\n");
	len2 = printf("Percent:[%%]\n");
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	return (0);
}