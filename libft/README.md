# Libft

<div align="center">

*This project has been created as part of the 42 curriculum by amaghari.*

</div>

## 📖 About the Project

**Libft** is a fundamental project of the 42 School curriculum. The goal is to create a personal C library by reimplementing standard C library functions and developing additional utility functions.

Instead of relying entirely on existing library functions, this project requires understanding how they work internally and implementing them from scratch. It provides an opportunity to strengthen knowledge of the C programming language, memory management, pointers, strings, and data structures.

The resulting library, `libft.a`, can be reused in future C projects, making it easier to write clean, modular, and maintainable code.

The main principle of this project is simple: **understand every function, not just its result.**

## 🎯 Objectives

- Reimplement selected functions from the standard C library.
- Develop utility functions for strings, memory, and character manipulation.
- Understand pointers, arrays, and dynamic memory allocation.
- Implement and manage singly linked lists.
- Learn how to organize a C project into source files and header files.
- Compile multiple source files into a static library.
- Use a Makefile to automate compilation and cleanup.
- Follow the 42 School coding standards and Norm.
- Build a reusable foundation for future C projects.

## 🛠️ Technologies

- **Language:** C
- **Compiler:** `cc`
- **Build system:** `make`
- **Library format:** Static library (`.a`)
- **Header file:** `libft.h`

## 📚 Library Contents

### 1. Character Classification and Conversion

| Function | Description |
|---|---|
| `ft_isalpha` | Checks whether a character is an alphabetic letter. |
| `ft_isdigit` | Checks whether a character is a decimal digit. |
| `ft_isalnum` | Checks whether a character is alphanumeric. |
| `ft_isascii` | Checks whether a value belongs to the ASCII character range. |
| `ft_isprint` | Checks whether a character is printable. |
| `ft_toupper` | Converts a lowercase letter to uppercase. |
| `ft_tolower` | Converts an uppercase letter to lowercase. |

### 2. String Manipulation

| Function | Description |
|---|---|
| `ft_strlen` | Calculates the length of a string. |
| `ft_strlcpy` | Copies a string into a destination buffer with size limitation. |
| `ft_strlcat` | Appends a string to a destination buffer with size limitation. |
| `ft_strchr` | Finds the first occurrence of a character in a string. |
| `ft_strrchr` | Finds the last occurrence of a character in a string. |
| `ft_strncmp` | Compares two strings up to a specified number of characters. |
| `ft_strnstr` | Searches for a substring within a string, limited by a specified length. |
| `ft_strdup` | Allocates memory and creates a duplicate of a string. |
| `ft_substr` | Extracts a substring into newly allocated memory. |
| `ft_strjoin` | Concatenates two strings into a new allocation. |
| `ft_strtrim` | Removes specified characters from the beginning and end of a string. |
| `ft_split` | Splits a string into an array of strings using a delimiter. |
| `ft_strmapi` | Applies a function to each character and creates a new string. |
| `ft_striteri` | Applies a function to each character by index, modifying the string. |

### 3. Memory Manipulation

| Function | Description |
|---|---|
| `ft_memset` | Fills a memory block with a specified byte. |
| `ft_bzero` | Sets a memory block to zero. |
| `ft_memcpy` | Copies bytes between non-overlapping memory regions. |
| `ft_memmove` | Copies bytes safely when memory regions may overlap. |
| `ft_memchr` | Searches for a byte in a memory block. |
| `ft_memcmp` | Compares two memory blocks. |
| `ft_calloc` | Allocates memory and initializes it to zero. |

### 4. Conversion and Output

| Function | Description |
|---|---|
| `ft_atoi` | Converts the initial portion of a string to an integer. |
| `ft_itoa` | Converts an integer into a newly allocated string. |
| `ft_putchar_fd` | Writes a character to a file descriptor. |
| `ft_putstr_fd` | Writes a string to a file descriptor. |
| `ft_putendl_fd` | Writes a string followed by a newline. |
| `ft_putnbr_fd` | Writes an integer to a file descriptor. |

### 5. Linked Lists

The library includes functions for creating, manipulating, and deleting singly linked lists. Each node stores a pointer to its content and a pointer to the next node.

| Function | Description |
|---|---|
| `ft_lstnew` | Creates a new list node. |
| `ft_lstadd_front` | Adds a node to the beginning of a list. |
| `ft_lstsize` | Counts the number of nodes in a list. |
| `ft_lstlast` | Returns the last node of a list. |
| `ft_lstadd_back` | Adds a node to the end of a list. |
| `ft_lstdelone` | Deletes one node and frees its content using a supplied function. |
| `ft_lstclear` | Deletes and frees an entire list. |
| `ft_lstiter` | Applies a function to the content of every node. |
| `ft_lstmap` | Creates a new list by applying a function to each node's content. |

- `ft_*.c` — source files containing the library functions, including linked-list operations.
- `libft.h` — function prototypes, required includes, and linked-list structure declarations.
- `Makefile` — compilation rules for building the static library.
- `README.md` — project documentation.

The exact structure may vary depending on how the source files are organized.

## ⚙️ Compilation

The project uses a `Makefile` to automate compilation.

### Build the library

```bash
make
```

Compiles the project and creates the static library:

```text
libft.a
```

### Remove object files

```bash
make clean
```

Removes intermediate object files (`.o`) while preserving the compiled library.

### Remove object files and the library

```bash
make fclean
```

Removes both intermediate object files and `libft.a`.

### Rebuild the library

```bash
make re
```

Performs a clean rebuild of the library.

## 🚀 How to Use the Library

To use Libft in another C project, include the header file and link the static library during compilation.

### Example

```c
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *str;

    str = ft_strdup("Hello, Libft!");
    if (!str)
        return (1);

    printf("%s\n", str);
    free(str);
    return (0);
}
```

Compile the program with:

```bash
cc main.c -I. -L. -lft -o program
```

Run it with:

```bash
./program
```

The `-I.` option specifies where to find `libft.h`, `-L.` specifies the directory containing `libft.a`, and `-lft` links the library.

Functions that allocate memory dynamically may require the caller to release that memory when it is no longer needed.

## 🧠 What I Learned

Working on Libft helped me develop a better understanding of:

- C fundamentals, including pointers, arrays, and strings.
- Memory allocation, initialization, and deallocation.
- The differences between copying memory and moving overlapping memory.
- Null termination and buffer-size management.
- Error handling and edge cases.
- Function pointers and callback functions.
- Dynamic data structures and linked lists.
- Header files, compilation, and static libraries.
- Writing reusable code and debugging low-level operations.

The project reinforced the importance of reading documentation, understanding function behavior, and testing implementations against edge cases.

## 🧪 Testing

Each function should be tested with normal inputs, boundary conditions, and empty or invalid inputs where applicable.

Important test cases include:

- Empty strings and zero-length operations.
- Null pointers where the function's contract permits handling them.
- Strings containing a single character.
- Negative integers and zero.
- Memory regions that overlap.
- Allocation failures.
- Empty linked lists and single-node lists.
- Correct memory cleanup.

Testing should verify that functions behave according to their expected specifications, including return values and memory ownership.

## 🤖 Use of AI

AI was used only to help find documentation for certain functions. The goal of the project was to understand the implementation of each function and build a personal C library.

## 👤 Author

**amaghari**

This project was created as part of the 42 School curriculum.

---

*Libft is the foundation for future C projects: a collection of essential tools built to understand the language from the ground up.*

