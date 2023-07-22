#ifndef MAIN_H
#define MAIN_H


#include <stdarg.h>
#include <stddef.h>
#include <unistd.h>

#define BUFF_SIZE 1024

int _printf(const char *format, ...);

void print_buffer(char buffer[], int *buff_ind);

int get_format_flags(const char *format, int *i);
int get_format_width(const char *format, int *i, va_list arg_list);
int get_format_precision(const char *format, int *i, va_list arg_list);
int get_format_size(const char *format, int *i);
int handle_format_specifier(const char *format, int *i, va_list arg_list,
char buffer[], int flags, int width, int precision, int size);

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
