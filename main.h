#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

int _putchar(char c);

int print_char(va_list args);
int print_string(va_list args);
int print_int(va_list args);
int _printf(const char *format, ...);
int handle_format(const char *format, va_list args, int i, int count);

#endif 