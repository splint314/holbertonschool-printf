_printf:

A custom implementation of the C standard library function printf().

Description:

This project is a recreation of the printf() function from the C standard library. The function produces output according to a format string and variable arguments, writing output to stdout (the standard output stream).

Function Prototype:
cint _printf(const char *format, ...);
Supported Conversion Specifiers

%c = prints a single character 
%s = prints a string of characters 
%d = prints a signed decimal integer
%i = prints a signed integer 
%% = prints a percent sign

All files will be compiled on Ubuntu 20.04 LTS using gcc with the options -Wall -Werror -Wextra -pedantic -std=gnu89

All files should end with a new line

Code should use the Betty style

No more than 5 functions per file

All header files should be include guarded

Global variables are not allowed

Compilation
bashgcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf

Usage:

Include the header file in your C program:
c#include "main.h"

Example usage:
c#include "main.h"

int main(void)
{
_printf("Hello, %s!\n", "World");
_printf("Character: %c\n", 'A');
_printf("Number: %d\n", 42);
_printf("Percentage: %%\n");
    
return (0);
}

Output:

Hello, World!
Character: A
Number: 42
Percentage: %

Files:

main.h: Header file containing function prototypes and includes
_printf.c: main printf function implementation
_putchar.c: function who prints a character
man_3_printf.8: man page for _printf

Testing:
To test the function, compile with your test files:
bashgcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o reworkedprintf
./reworkedprintf

Man Page:
To view the man page:
bashman ./man_3_printf.8

Authors:

Kevin Rigal - https://github.com/splint314
Lucas Lupon - https://github.com/nobulp

This project is part of the Holberton School curriculum.