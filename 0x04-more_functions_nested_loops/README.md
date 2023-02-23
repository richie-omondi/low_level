# C - More Functions, more nested loops

This repo contains C software written to implement different functions. There is no use of a standard library.

## Helper File :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [main.h](./main.h): Header file containing prototypes for all
functions written in the project.

| File                     | Prototype                        |
| ------------------------ | -------------------------------- |
| `0-isupper.c`            | `int _isupper(int c);`           |
| `1-isdigit.c`            | `int _isdigit(int c);`           |
| `2-mul.c`                | `int mul(int a, int b);`         |
| `3-print_numbers.c`      | `void print_numbers(void);`      |
| `4-print_most_numbers.c` | `void print_most_numbers(void);` |
| `5-more_numbers.c`       | `void more_numbers(void);`       |
| `6-print_line.c`         | `void print_line(int n);`        |
| `7-print_diagonal.c`     | `void print_diagonal(int n);`    |
| `8-print_sqaure.c`       | `void print_square(int size);`   |
| `10-print_triangle.c`    | `void print_triangle(int size);` |
| `11-print_to_98.c`       | `void print_to_98(int n);`       |
| `100-times_table.c`      | `void print_times_table(int n)`  |

## Tasks :page_with_curl:

* **0. isupper**
  * [0-isupper.c](./0-isupper.c): C program that checks for uppercase character. Returns `1` if `c` is uppercase. Returns `0` otherwise.

* **1. isdigit**
  * [1-isdigit.c](./1-isdigit.c): C function that checks for a digit (0 through 9). Returns `1` if `c` is a digit, `0` otherwise.

* **2. Collaboration is multiplication**
  * [2-mul.c](./2-mul.c): C function that multiplies 2 numbers.

* **3. The numbers speak for themselves**
  * [3-print_numbers.c](./3-print_numbers.c): C function that prints the numbers, from `0` to `9`, followed by a new line. 

* **4. isalpha**
  * [4-isalpha.c](./4-isalpha.c): C function that checks for alphabetic characters.
  Returns `1` if the character is a letter, `0` otherwise.

* **5. Sign**
  * [5-sign.c](./5-sign.c): C function that prints the sign of a number. Returns:
    * `1` and prints `+` if the number is greater than zero.
    * `0` and prints `0` if the number is zero.
    * `-1` and prints `-` if the number is less than zero.

* **6. There is no such thing as absolute value in this world. You can only estimate what a thing is worth to you**
  * [6-abs.c](./6-abs.c): C function that returns the absolute value of an integer.

* **7. There are only 3 colors, 10 digits, and 7 notes; it's what we do with them that's important**
  * [7-print_last_digit.c](./7-print_last_digit.c): C function that prints the last
  digit of a number. Returns the value of the last digit.

* **8. I'm federal agent Jack Bauer, and today is the longest day of my life**
  * [8-24_hours.c](./8-24_hours.c): C function that prints every minute of the day
  of Jack Bauer, starting from 00:00 to 23:59.

* **9. Learn your times table**
  * [9-times_table.c](./9-times_table.c): C function that prints the 9 times table,
  starting with 0.

* **10. a + b**
  * [10-add.c](./10-add.c): C function that returns the addition of two integers.

* **11. 98 Battery Street, San Francisco CA 94111**
  * [11-print_to_98.c](./11-print_to_98.c): C function that prints all natural numbers
  from an input to `98` followed by a new line, as follows:
    * Numbers are separated by a comma followed by a space.
    * Numbers are printed in order.
    * Input represents the number to begin counting from.
    * `98` is the last number printed.

* **12. The World looks like a multiplication-table, or a mathematical equation, which, turn it how you will, balances itself**
  * [100-times_table.c](./100-times_table.c): C function that prints the times table of
  an input value, starting with 0:
    * If input is greater than `15` or less than `0`, function prints nothing.

* **13. Nature made the natural numbers; All else is the work of women**
  * [101-natural.c](./101-natural.c): C program that computes and prints the sum of
  all multiples of `3` or `5` below `1024` (excluded).

* **14. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A**
  * [102-fibonacci.c](./102-fibonacci.c): C program that prints the first 50
  Fibonacci numbers, starting with `1` and `2`, followed by a new line.
  Numbers are separated by a comma followed by a space.

* **15. Even Liber Abbaci**
  * [103-fibonacci.c](./103-fibonacci.c): C program that prints the sum of even-valued
  Fibonacci numbers not exceeding 4,000,000, followed by a new line.

* **16. In computer class, the first assignment was to write a program to print the first 100 Fibonacci numbers. Instead, I wrote a program that would steal passwords of students. My teacher gave me an A+**
  * [104-fibonacci.c](./104-fibonacci.c): C program that prints the first 98 Fibonacci
  numbers, starting with `1` and `2`, followed by a new line, without using `long long`,
  `malloc`, pointers, arrays, structures, or any library besides the standard.
  Numbers are separated by a comma followed by a space.
