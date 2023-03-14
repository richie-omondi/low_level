# C - Malloc, free

This repo contains code written to understand `malloc` and `free`.

## Helper File :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [main.h](./main.h): Header file containing prototypes for all
functions written in the project.

| File                     | Prototype                                              |
| ------------------------ | --------------------------------                       |
| `0-create_array.c`       | `char *create_array(unsigned int size, char c);`       |
| `1-strdup.c`             | `char *_strdup(char *str);`                            |
| `2-str_concat.c`         | `char *str_concat(char *s1, char *s2);`                |
| `3-alloc_grid.c`         | `int **alloc_grid(int width, int height);`             |
| `4-free_grid.c`          | `int **alloc_grid(int width, int height);`             |
| `5-sqrt_recursion.c`     | `int _sqrt_recursion(int n);`                          |
| `6-is_prime_number.c`    | `int is_prime_number(int n;`                           |

## Tasks :page_with_curl:

* **0. Float like a butterfly, sting like a bee**
  * C function that creates an array of chars, and initializes it with a specific `char`.
    * Returns `NULL` if size = `0`
    * Returns a pointer to the array, or `NULL` if it fails

* **1. The woman who has no imagination has no wings**
  * C function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
    * The `_strdup()` function returns a pointer to a new string which is a duplicate of the string `str`. Memory for the new string is obtained with `malloc`, and can be freed with `free`.
    * Returns `NULL` if str = NULL
    * On success, the `_strdup` function returns a pointer to the duplicated string. It returns `NULL` if insufficient memory was available.

* **2. He who is not courageous enough to take risks will accomplish nothing in life**
  * C function that concatenates two strings.
    * The returned pointer should point to a newly allocated space in memory which contains the contents of `s1`, followed by the contents of `s2`, and null terminated
    * if `NULL` is passed, treat it as an empty string
    * The function should return `NULL` on failure
 
* **3. If you even dream of beating me you'd better wake up and apologize**
  * C function that returns a pointer to a 2 dimensional array of integers.
    * Each element of the grid should be initialized to `0`
    * The function should return `NULL` on failure
    * If `width` or `height` is `0` or negative, return `NULL`

* **4. It's not bragging if you can back it up**
  * C function that frees a 2 dimensional grid previously created by your alloc_grid function.

* **5. Minimal Number of Coins for Change (Greedy Algorithm)**
  * Program that prints the minimum number of coins to make change for an amount of money.
    * Usage: `./change cents`
    * where `cents` is the amount of cents you need to give back
    * if the number of arguments passed to your program is not exactly `1`, print `Error`, followed by a new line, and return `1`
    * you should use `atoi` to parse the parameter passed to your program
    * If the number passed as the argument is negative, print `0`, followed by a new line
    * You can use an unlimited number of coins of values `25`, `10`, `5`, `2`, and `1` `cent`
