#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>
#include <limits.h>
#include <stdio.h>

int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *s);
int print_int(int n);
int print_bin(unsigned int n);
int print_unsigned_int(unsigned int n);
int print_unsigned(unsigned int n);
int print_octal(unsigned int n);
int print_HEX(unsigned long int n);
int print_hex(unsigned int n, int uppercase);
int print_unpritable(char *str);
int print_hex_l(unsigned long int n);
int print_mem_address(va_list adress);
int print_rev(char *s);
int rot13(char *s);


#endif
