# 📚 libft - Your First C Library

<div align="center">

![42 School](https://img.shields.io/badge/42-libft-00babc?style=flat-square&logo=42)
![Norminette](https://img.shields.io/badge/norminette-passing-success?style=flat-square)
![Language](https://img.shields.io/badge/language-C-blue?style=flat-square)

*Recoding the C standard library from scratch*

[About](#about) • [Functions](#functions) • [Usage](#usage) • [Installation](#installation)

</div>

---

## 📖 About

**libft** is the first project in the 1337/42 curriculum. The goal is to recreate essential functions from the C standard library (`libc`), along with additional utility functions that will be used throughout the rest of the cursus.

This project serves as the foundation for understanding:
- Memory allocation and manipulation
- String operations
- Linked list data structures
- Makefile compilation
- Library creation and management

> **Project Status:** ✅ Completed | **Score:** _/125

---

## 🎯 Project Requirements

- **Language:** C
- **Norm:** 42 Norminette v3
- **Compilation:** `cc -Wall -Wextra -Werror`
- **No:** Global variables, `for`, `switch`, `case`
- **Allowed:** `write`, `malloc`, `free`

---

## 📋 Functions

### Part 1: Libc Functions

Functions from the standard C library, reimplemented from scratch:

| Function | Description |
|----------|-------------|
| `ft_isalpha` | Check if character is alphabetic |
| `ft_isdigit` | Check if character is a digit |
| `ft_isalnum` | Check if character is alphanumeric |
| `ft_isascii` | Check if character is ASCII |
| `ft_isprint` | Check if character is printable |
| `ft_strlen` | Calculate string length |
| `ft_memset` | Fill memory with a constant byte |
| `ft_bzero` | Zero a byte string |
| `ft_memcpy` | Copy memory area |
| `ft_memmove` | Copy memory area (handles overlap) |
| `ft_strlcpy` | Size-bounded string copy |
| `ft_strlcat` | Size-bounded string concatenation |
| `ft_toupper` | Convert char to uppercase |
| `ft_tolower` | Convert char to lowercase |
| `ft_strchr` | Locate character in string |
| `ft_strrchr` | Locate character in string (reverse) |
| `ft_strncmp` | Compare strings up to n characters |
| `ft_memchr` | Scan memory for a character |
| `ft_memcmp` | Compare memory areas |
| `ft_strnstr` | Locate substring in string |
| `ft_atoi` | Convert string to integer |
| `ft_calloc` | Allocate and zero memory |
| `ft_strdup` | Duplicate a string |

### Part 2: Additional Functions

Utility functions not in the standard library:

| Function | Description |
|----------|-------------|
| `ft_substr` | Extract substring from string |
| `ft_strjoin` | Concatenate two strings |
| `ft_strtrim` | Trim characters from string ends |
| `ft_split` | Split string by delimiter |
| `ft_itoa` | Convert integer to string |
| `ft_strmapi` | Apply function to each char (with index) |
| `ft_striteri` | Iterate and modify string with function |
| `ft_putchar_fd` | Output char to file descriptor |
| `ft_putstr_fd` | Output string to file descriptor |
| `ft_putendl_fd` | Output string + newline to fd |
| `ft_putnbr_fd` | Output number to file descriptor |

### Bonus: Linked List Functions

Functions for manipulating linked lists:

| Function | Description |
|----------|-------------|
| `ft_lstnew` | Create new list element |
| `ft_lstadd_front` | Add element at beginning |
| `ft_lstsize` | Count elements in list |
| `ft_lstlast` | Return last element |
| `ft_lstadd_back` | Add element at end |
| `ft_lstdelone` | Delete one element |
| `ft_lstclear` | Delete all elements |
| `ft_lstiter` | Iterate and apply function |
| `ft_lstmap` | Iterate, apply function, create new list |

---

## 🚀 Installation

```bash
# Clone the repository
git clone https://github.com/YOUR_USERNAME/libft.git
cd libft

# Compile the library
make

# Compile with bonus functions
make bonus

# Clean object files
make clean

# Clean everything (including library)
make fclean

# Recompile everything
make re
```

---

## 💻 Usage

### Include in Your Project

```c
#include "libft.h"
```

### Compile with Your Code

```bash
cc -Wall -Wextra -Werror your_file.c -L. -lft -o your_program
```

### Example Usage

```c
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char    *str;
    char    **split;
    int     i;

    // String manipulation
    str = ft_strjoin("Hello, ", "1337!");
    printf("%s\n", str);
    
    // String splitting
    split = ft_split("one,two,three", ',');
    i = 0;
    while (split[i])
    {
        printf("%s\n", split[i]);
        free(split[i]);
        i++;
    }
    free(split);
    free(str);
    
    return (0);
}
```

---

## 📁 Project Structure

```
libft/
├── Makefile           # Compilation rules
├── libft.h            # Header file
├── ft_*.c             # Mandatory functions
└── ft_lst*.c          # Bonus functions (linked lists)
```

---

## 🧪 Testing

You can test your libft with these testers:

- [libft-unit-test](https://github.com/alelievr/libft-unit-test)
- [Tripouille/libftTester](https://github.com/Tripouille/libftTester)
- [libft-war-machine](https://github.com/0x050f/libft-war-machine)

```bash
# Example with libftTester
git clone https://github.com/Tripouille/libftTester.git
cd libftTester
make a  # Test all mandatory functions
make b  # Test bonus functions
```

---

## 📝 Notes

- All functions follow the **42 Norminette** coding standard
- Memory is properly allocated and freed (no leaks)
- Edge cases are handled (NULL pointers, empty strings, etc.)
- Functions with `malloc` return NULL on allocation failure

---

## 🔗 Resources

- [C Standard Library Reference](https://en.cppreference.com/w/c)
- [Understanding Memory Management](https://www.learn-c.org/en/Dynamic_allocation)

---

## 👤 Author

**Jabir Gaadi**
- 1337 Login: `jgaadi`
- GitHub: [@Jabir1337](https://github.com/Jabir1337)

---

## 📄 License

This project is part of the 42/1337 curriculum. Feel free to use it for learning purposes!

---

<div align="center">

**Made with ☕ at 1337 Benguerir**

⭐ Star this repo if you found it helpful!

</div>
