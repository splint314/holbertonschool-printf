#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

/* main function */
int _printf(const char *format, ...);

/* helper functions */
int print_char(int c);
int print_string(char *s);
int print_int(int n);

#endif
