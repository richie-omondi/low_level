# C - Preprocessor

This repo contains code written to understand the compilation process, preprocessor directives in C and macros.

## Tasks :page_with_curl:

* **0. Object-like Macro**
  * Create a header file that defines a macro named `SIZE` as an abbreviation for the token `1024`.

* **1. Pi**
  * Create a header file that defines a macro named `PI` as an abbreviation for the token `3.14159265359`.

* **2. File name**
  * Write a program that prints the name of the file it was compiled from, followed by a new line.
 
* **3. Function-like Macro**
  * Write a function-like macro `ABS(x)` that computes the absolute value of a number `x`.

* **4. _realloc**
  * Write a function that reallocates a memory block `using` malloc and `free`
    * where `ptr` is a pointer to the memory previously allocated with a call to `malloc: malloc(old_size)`
    * `old_size` is the size, in bytes, of the allocated space for `ptr`
    * and `new_size` is the new size, in bytes of the new memory block
    * The contents will be copied to the newly allocated space, in the range from the start of `ptr` up to the minimum of the old and new sizes
    * If `new_size > old_size`, the “added” memory should not be initialized
    * If `new_size == old_size` do not do anything and return `ptr`
    * If `ptr` is `NULL`, then the call is equivalent to `malloc(new_size)`, for all values of `old_size` and `new_size`
    * If `new_size` is equal to zero, and `ptr` is not `NULL`, then the call is equivalent to `free(ptr)`. Return `NULL`
    * Don’t forget to free `ptr` when it makes sense

* **5. We must accept finite disappointment, but never lose infinite hope**
  * Program that multiplies two positive numbers.
    * Usage: `mul num1 num2`
    * `num1` and `num2` will be passed in `base 10`
    * Print the result, followed by a new line
    * If the number of arguments is incorrect, print Error, followed by a new line, and exit with a status of `98`
    * `num1` and `num2` should only be composed of digits. If not, print Error, followed by a new line, and exit with a status of 98

