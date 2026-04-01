 ## 🚀 README of the group project _printf 

A custom implementation of the C `printf` function, built from scratch.

![C](https://img.shields.io/badge/C-gnu89-blue)
![Linux](https://img.shields.io/badge/Linux-Ubuntu-orange)
![Project](https://img.shields.io/badge/Project-Holberton-success)

## 📚 Table of Contents

<details>
<summary>📖 Click to expand</summary>

<br>

* 📖 [Description](https://github.com/splint314/holbertonschool-printf?tab=readme-ov-file#-description)
* ✨ [Features](https://github.com/splint314/holbertonschool-printf?tab=readme-ov-file#-features)
* 🗂️ [Project Structure](https://github.com/splint314/holbertonschool-printf?tab=readme-ov-file#%EF%B8%8F-project-structure)
* ⚙️ [Installation](https://github.com/splint314/holbertonschool-printf?tab=readme-ov-file#%EF%B8%8F-installation)
* 🛠️ [Compilation](https://github.com/splint314/holbertonschool-printf?tab=readme-ov-file#%EF%B8%8F-compilation)
* ▶️ [Usage](https://github.com/splint314/holbertonschool-printf?tab=readme-ov-file#%EF%B8%8F-usage)
* 📘 [Manual](https://github.com/splint314/holbertonschool-printf?tab=readme-ov-file#-manual)
* ⚠️ [Limitations](https://github.com/splint314/holbertonschool-printf?tab=readme-ov-file#%EF%B8%8F-limitations)
* 🧪 [Valgrind](https://github.com/splint314/holbertonschool-printf?tab=readme-ov-file#-valgrind)
* 🔄 [Flowchart](https://github.com/splint314/holbertonschool-printf?tab=readme-ov-file#-flowchart)
* 👨‍💻 [Author](https://github.com/splint314/holbertonschool-printf?tab=readme-ov-file#%E2%80%8D-author)

</details>

## 📖 Description

`_printf` is a remaked version of the standard `printf` function.  
It formats and prints data to the standard output without using the standard library.
This project was made in groups of 2
## ✨ Features

- %c → character  
- %s → string  
- %d / %i → integer  

Handles NULL strings and negative integers.

## 🗂️ Project Structure

```
.
├── main.h
├── print_char.c
├── print_string.c
├── print_int.c
└── _printf.c
```

## ⚙️ Installation
1. Open ur terminal and navigate into the folder where u want to put the program

2. Clone our repository by using the following command
git clone https://github.com/splint314/holbertonschool-printf

## 🛠️ Compilation

```
gcc -Wall -Werror -Wextra -pedantic *.c -o printf
```

## ▶️ Usage

```c
#include "_printf.h"

int main(void)
{
    _printf("Hello %s\n", "world");
    return (0);
}
```
## 📘 Manual

man ./man_3_printf

## ⚠️ Limitations

- No flags
- No width/precision
- No floats

## 🧪 Valgrind 

==8252== Memcheck, a memory error detector<br>
==8252== Copyright (C) 2002-2022, and GNU GPL'd, by Julian Seward et al.<br>
==8252== Using Valgrind-3.22.0 and LibVEX; rerun with -h for copyright info<br>
==8252== Command: ./a.out<br>
==8252== <br>
Let's try to printf a simple sentence.<br>
Let's try to printf a simple sentence.<br>
Length:[39, 39]<br>
Length:[39, 39]<br>
Negative:[-762534]<br>
Negative:[-762534]<br>
Unsigned:[%u]<br>
Unsigned:[2147484671]<br>
Unsigned octal:[%o]<br>
Unsigned octal:[20000001777]<br>
Unsigned hexadecimal:[%x, %X]<br>
Unsigned hexadecimal:[800003ff, 800003FF]<br>
Character:[H]<br>
Character:[H]<br>
String:[I am a string !]<br>
String:[I am a string !]<br>
==8252== <br>
==8252== HEAP SUMMARY:<br>
==8252==     in use at exit: 0 bytes in 0 blocks<br>
==8252==   total heap usage: 1 allocs, 1 frees, 1,024 bytes allocated<br>
==8252== <br>
==8252== All heap blocks were freed -- no leaks are possible<br>
==8252== <br>
==8252== For lists of detected and suppressed errors, rerun with: -s<br>
==8252== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 0 from 0)<br>

## 🔄 Flowchart

![Description](https://github.com/splint314/holbertonschool-printf/blob/main/flowchart.png?raw=true)

## 👨‍💻 Author
| Jonathan Martin | [John-Natty](https://github.com/John-Natty) |<br>
| Kevin Rigal | [@splint314](https://github.com/splint314) |

Students at Holberton School Toulouse.
