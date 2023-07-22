#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
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

#endif /* MAIN_H */
