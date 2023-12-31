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
int print_octal(unsigned int n);
int print_HEX(unsigned int n);
int print_hex(unsigned int n);
int print_unprintable(char *str);
int print_hex_l(unsigned long int n);
int print_mem_address(void *addr);
int print_rev(char *s);
int rot13(char *s);
int print_plus_int(int num);
int print_space_int(int num);
int print_plus_unsigned_int(unsigned int num);
int print_space_unsigned_int(unsigned int num);
int print_hash_octal(unsigned int num);
int print_hash_hex(unsigned int num, int uppercase);


#endif
