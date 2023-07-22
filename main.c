#include <stdio.h>
#include "main.h"

int main()
{
    int len_1, len_2;

    len_1 = printf("Expected output:    %%%%%%\n");
    len_2 = _printf("Current output:     %%%%%%\n");
    printf("Expected length:    [%d]\n", len_1);
    printf("Current length:     [%d]\n", len_2);

    return (0);
}