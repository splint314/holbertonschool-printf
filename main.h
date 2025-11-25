#include <limits.h>
#include <stdarg.h>
#include <string.h>
#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
void print_string(const char *s);
int _putchar(int c);

#endif /* MAIN_H */