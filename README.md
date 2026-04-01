README# 🚀 _printf

A custom implementation of the C `printf` function, built from scratch.

![C](https://img.shields.io/badge/C-gnu89-blue)
![Linux](https://img.shields.io/badge/Linux-Ubuntu-orange)
![Project](https://img.shields.io/badge/Project-Holberton-success)


## Description

`_printf` is a remaked version of the standard `printf` function.  
It formats and prints data to the standard output without using the standard library.
This project was made in groups of 2
## Features

- %c → character  
- %s → string  
- %d / %i → integer  

Handles NULL strings and negative integers.

## Project Structure

```
.
├── main.h
├── print_char.c
├── print_string.c
├── print_int.c
└── _printf.c
```

## Compilation

```
gcc -Wall -Werror -Wextra -pedantic *.c -o printf
```

## Usage

```c
#include "_printf.h"

int main(void)
{
    _printf("Hello %s\n", "world");
    return (0);
}
```

## Limitations

- No flags
- No width/precision
- No floats

## Valgrind 

==8252== Memcheck, a memory error detector
==8252== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.
==8252== Using Valgrind-3.22.0 and LibVEX; rerun with -h for copyright info
==8252== Command: ./a.out
==8252== 
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[%u]
Unsigned:[2147484671]
Unsigned octal:[%o]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[%x, %X]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
==8252== 
==8252== HEAP SUMMARY:
==8252==     in use at exit: 0 bytes in 0 blocks
==8252==   total heap usage: 1 allocs, 1 frees, 1,024 bytes allocated
==8252== 
==8252== All heap blocks were freed -- no leaks are possible
==8252== 
==8252== For lists of detected and suppressed errors, rerun with: -s
==8252== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)

## Flowchart

![Description](https://github.com/splint314/holbertonschool-printf/blob/main/flowchart.png?raw=true)

## Author
| Jonathan Martin | [John-Natty](https://github.com/John-Natty) |
| Kevin Rigal | [@splint314](https://github.com/splint314) |