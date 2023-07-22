#include "main.h"
#include <stdio.h>
#include <limits.h>

int main()
{
	int len_1 = 0, len_2 = 0;

	/* ===========> % <=========== */
	printf("----------------------\n");
	printf("-> PERCENTAGE CASES <-\n");
	printf("----------------------\n");
	len_1 = printf("Expected output:    %%\n");
	len_2 = _printf("Current output:     %%\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	len_1 = printf("Expected output:    %%%%%%\n");
	len_2 = _printf("Current output:     %%%%%%\n");
	printf("Expected length:    [%d]\n", len_1);
	printf("Current length:     [%d]\n", len_2);
	printf("Expected output:    ");
	return (0);
}