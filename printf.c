#include <main.h>


int _printf(const char *format, ...)
{
    va_list args;
    int i=0, count = 0;
}
if (format[i] == 'c')
{
    count += print_char(args);
    //.....
}
else if (format[i] == 's')
{
    count += print_string(args);
    //.....
}