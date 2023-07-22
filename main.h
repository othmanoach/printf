#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>


int _printf(const char *format, ...);
int _putchar(char c);
int _puts(char *s);
int print_int(int n);
int print_bin(unsigned int n);
int print_unsigned_int(unsigned int n);
int print_octal(unsigned int n);
int print_HEX(unsigned int n);
int print_hex(unsigned int n);
int print_unpritable(char *str);
int print_hex_l(unsigned long int n);
int print_mem_address(void *ptr);
int print_rev(char *s);
int rot13(char *s);
int flags(/*to be determinated*/);

#endif