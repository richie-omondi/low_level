# C - Function pointers

This repo contains code written to understand variadic functions.

## Helper File :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [variadic_functions.h](./variadic_functions.h): Header file containing prototypes for all
functions written in the project.

| File                     | Prototype                                                                 |
| ------------------------ | --------------------------------                                          |
| `0-sum_them_all.c`       | `int sum_them_all(const unsigned int n, ...);`                            |
| `1-print_numbers.c`      | `void print_numbers(const char *separator, const unsigned int n, ...);`   |
| `2-print_strings.c`      | `void print_strings(const char *separator, const unsigned int n, ...);`   |
| `3-print_all.c`          | `void print_all(const char * const format, ...);`

## Tasks :page_with_curl:

* **0. Beauty is variable, ugliness is constant**
  * C function that returns the sum of all parameters. If `n=0`, return `0`

* **1. To be is to be the value of a variable**
  * Write a function that prints numbers, followed by a new line.
    * where `separator` is the string to be printed between numbers
    * and `n` is the number of integers passed to the function
    * You are allowed to use `printf`
    * If separator is `NULL`, don’t print it
    * Print a new line at the end of your function
  
* **2. One woman's constant is another woman's variable**
  * Write a function that prints strings, followed by a new line.
    * where `separator` is the string to be printed between the strings
    * and `n` is the number of strings passed to the function
    * You are allowed to use `printf`
    * If separator is `NULL`, don’t print it
    * If one of the string is `NULL`, print (`nil`) instead
    * Print a new line at the end of your function
   
* **3. A goal is not always meant to be reached, it often serves simply as something to aim at**
  * Write a program that performs simple operations.
    * Usage: `calc num1 operator num2`
    * You can assume `num1` and `num2` are integers, so use the `atoi` function to convert them from the string input to `int`
    operator is one of the following:
    `+`: addition
    `-`: subtraction
    `*`: multiplication
    `/`: division
    `%`: modulo
    * The program prints the result of the operation, followed by a new line
    * You can assume that the result of all operations can be stored in an `int`
    * if the number of arguments is wrong, print `Error`, followed by a new line, and exit with the status `98`
    * if the operator is none of the above, print `Error`, followed by a new line, and exit with the status `99`
    * if the user tries to divide (`/` or `%`) by `0`, print `Error`, followed by a new line, and exit with the status `100`

    This task requires that you create four different files.

    **3-calc.h**

    This file should contain all the function prototypes and data structures used by the program. You can use this structure:

    ```
    /**
     * struct op - Struct op
     *
     * @op: The operator
     * @f: The function associated
     */
    typedef struct op
    {
        char *op;
        int (*f)(int a, int b);
    } op_t;
    ```

    **3-op_functions.c**

    This file should contain the 5 following functions (not more):

    `op_add`: returns the sum of `a` and `b`. Prototype: `int op_add(int a, int b)`;
    `op_sub`: returns the difference of `a` and `b`. Prototype: `int op_sub(int a, int b)`;
    `op_mul`: returns the product of `a` and `b`. Prototype: `int op_mul(int a, int b)`;
    `op_div`: returns the result of the division of `a` by `b`. Prototype: `int op_div(int a, int b)`;
    `op_mod`: returns the remainder of the division of `a` by `b`. Prototype: `int op_mod(int a, int b)`;

    **3-get_op_func.c**

    This file should contain the function that selects the correct function to perform the operation asked by the user. You’re not allowed to declare any other function.

    Prototype: `int (*get_op_func(char *s))(int, int)`;
    where `s` is the operator passed as argument to the program
    This function returns a pointer to the function that corresponds to the operator given as a parameter. Example: `get_op_func("+") `should return a pointer to the function `op_add`

    If `s` does not match any of the 5 expected operators (`+`, `-`, `*`, `/`, `%`), return `NULL`
    You are only allowed to declare these two variables in this function:
    ```
        op_t ops[] = {
            {"+", op_add},
            {"-", op_sub},
            {"*", op_mul},
            {"/", op_div},
            {"%", op_mod},
            {NULL, NULL}
        };
        int i;
    ```
    **3-main.c**

    This file should contain your `main` function only.
    You are not allowed to directly call `op_add, op_sub, op_mul, op_div or op_mod` from the main function
    You have to use `atoi` to convert arguments to `int`



