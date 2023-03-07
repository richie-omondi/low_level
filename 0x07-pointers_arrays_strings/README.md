# C -Even more pointers, arrays, strings

This repo contains C software written to implement different functions. There is no use of a standard library.

## Helper File :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [main.h](./main.h): Header file containing prototypes for all
functions written in the project.

| File                     | Prototype                                              |
| ------------------------ | --------------------------------                       |
| `0-memset.c`             | `char *_memset(char *s, char b, unsigned int n);`      |
| `1-memcpy.c`             | `char *_memcpy(char *dest, char *src, unsigned int n);`|
| `2-strchar.c`            | `char *_strchr(char *s, char c);`                      |
| `3-strspn.c`             | `unsigned int _strspn(char *s, char *accept);`         |
| `4-strpbrk.c`            | `char *_strpbrk(char *s, char *accept);`               |
| `5-strstr.c`             | `char *_strstr(char *haystack, char *needle);`         |
| `7-print_chessboard.c`   | `void print_chessboard(char (*a)[8]);`                 |
| `8-print_diagsums.c`     | `void print_diagsums(int *a, int size);`               |
| `101-print_number.c`     | `void print_number(int n);`                            |
| `100-atoi.c`             | `int _atoi(char *s);`                                  |

## Code :page_with_curl:

* **0. memset**
  * [0-memset.c](./0-memset.c): C function that fills memory with a constant byte.
    * The `_memset()` function fills the first `n` bytes of the memory area pointed to by `s` with the constant byte `b`
    * Returns a pointer to the memory area `s`

* **1. memcpy**
  * [1-memcpy.c](./1-memcpy.c): C function that copies memory area.
    * The `_memcpy()` function copies n bytes from memory area src to memory area dest
    * Returns a pointer to dest 

* **2. strchr**
  * [2-strchr.c](./2-strchr.c): C function that locates a character in a string. Returns a pointer to the first occurrence of the character `c` in the string `s`, or `NULL` if the character is not found
 
* **3. strcmp**
  * [3-strcmp.c](./3-strcmp.c): C function that compares 2 strings

* **4. I am a kind of paranoid in reverse. I suspect people of plotting to make me happy**
  * [4-rev_array.c](./4-rev_array.c): C function that reverses the content of an array of integers

* **5. Always look up**
  * [5-string_toupper.c](./5-string_toipper.c): C function that changes all lowercase letter of a string to uppercase.

* **6. Expect the best. Prepare for the worst. Capitalize on what comes**
  * [6-cap_string.c](./6-cap_string.c): C function that capitalizes all words of a string

* **7. Mozart composed his music not for the elite, but for everybody**
  * [7-leet.c](./7-leet.c): C program that converts a string to `1337`

* **8. rot13**
  * [100-rot13.c](./100-rot13.c): C function that encodes a string using `rot13`

* **9. Numbers have life; they're not just symbols on paper**
  * [101-print_number.c](./101-print_number.c): C function that prints an integer

* **10. A dream doesn't become reality through magic; it takes sweat, determination and hard work**
  * [102-magic.c](./102-magic.c): Add one line to this code, so that the program prints `a[2] = 98`, followed by a new line.
    * You are not allowed to use the variable `a` in your new line of code
    * You are not allowed to modify the variable `p`
    * You can only write one statement
    * You are not allowed to use `,`
    * You are not allowed to code anything else than the line of expected line of code at the expected line
    * Your code should be written at line 19, before the ;
    * Do not remove anything from the initial code (not even the comments)
    * and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)

* **11.  It is the addition of strangeness to beauty that constitutes the romantic character in art**
  * [103-infinite_add.c](./103-infinite_add.c): C functions that add two numbers.
    * Where `n1` and `n2` are the two numbers
    * `r` is the buffer that the function will use to store the result
    * `size_r` is the buffer size
    * The function returns a pointer to the result
    * You can assume that you will always get positive numbers, or `0`
    * You can assume that there will be only digits in the strings `n1` and `n2`
    * `n1` and `n2` will never be empty
    * If the result can not be stored in `r` the function must return `0`

