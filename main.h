#include <limits.h>
#include <stdarg.h>
#include <string.h>
#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>


int print_char(va list);
int print_string(va list);
int print_int(va list)
int _printf(const char *format, ...);

#endif /* MAIN_H */