#include "main.h"

int _printf(const char *format, ...)
{
    va_list args;
    int i = 0, count = 0;
    char ch;

    if (format == NULL)
        return (-1);

    va_start(args, format);
    while (format[i])
    {
        if (format[i] != '%')
        {
            _putchar(format[i]);
            count++;
            i++;
            continue;
        }
        i++;
        if (format[i] == '\0')
        {
            va_end(args);
            return (-1);
        }

        if (format[i] == 'c')
        {
            ch = (char)va_arg(args, int);
            _putchar(ch);
            count++;
        }
        else if (format[i] == 's')
        {
            count += print_string(args);
        }
        else if (format[i] == '%')
        {
            _putchar('%');
            count++;
        }
        else
        {
            _putchar('%');
            _putchar(format[i]);
            count += 2;
        }
        i++;
    }
    va_end(args);
    return (count);
}