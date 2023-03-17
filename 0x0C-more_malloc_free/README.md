# C - More malloc, free

This repo contains code written to understand `malloc` and `free`.

## Helper File :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [main.h](./main.h): Header file containing prototypes for all
functions written in the project.

| File                     | Prototype                                                  |
| ------------------------ | --------------------------------                           |
| `0-malloc_checked.c`     | `void *malloc_checked(unsigned int b);`                    |
| `1-string_nconcat.c`     | `char *string_nconcat(char *s1, char *s2, unsigned int n);`|
| `2-calloc.c`             | `void *_calloc(unsigned int nmemb, unsigned int size);`    |
| `3-array_range.c`        | `int *array_range(int min, int max);`                      |
| `4-free_grid.c`          | `int **alloc_grid(int width, int height);`                 |
| `100-argstostr.c`        | `char *argstostr(int ac, char **av;`                       |

## Tasks :page_with_curl:

* **0. Trust no one**
  * C function that allocates memory using `malloc`.
     * Returns a pointer to the allocated memory
     * if `malloc` fails, the `malloc_checked` function should cause normal process termination with a status value of `98`

* **1. string_nconcat**
  * C function that concatenates two strings.
  * The returned pointer shall point to a newly allocated space in memory, which contains `s1`, followed by the first `n` bytes of `s2`, and null terminated
  * If the function fails, it should return `NULL`
  * If `n` is greater or equal to the length of `s2` then use the entire string `s2`
  * If `NULL` is passed, treat it as an empty string

* **2. _calloc**
  * C function that allocates memory for an array, using malloc.
    * The `_calloc` function allocates memory for an array of `nmemb` elements of `size` bytes each and returns a pointer to the allocated memory.
    * The memory is set to zero
    * If `nmemb` or `size` is `0`, then `_calloc` returns `NULL`
    * If `malloc` fails, then `_calloc` returns `NULL`
 
* **3. If you even dream of beating me you'd better wake up and apologize**
  * C function that returns a pointer to a 2 dimensional array of integers.
    * Each element of the grid should be initialized to `0`
    * The function should return `NULL` on failure
    * If `width` or `height` is `0` or negative, return `NULL`

* **4. It's not bragging if you can back it up**
  * C function that frees a 2 dimensional grid previously created by your alloc_grid function.

* **5. It isn't the mountains ahead to climb that wear you out; it's the pebble in your shoe**
  * C function that concatenates all the arguments of your program.
    * Returns `NULL` if `ac == 0` or `av == NULL`
    * Returns a pointer to a new string, or `NULL` if it fails
    * Each argument should be followed by a `\n` in the new string

