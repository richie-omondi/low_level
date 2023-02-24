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
| `101-print_number.c`     | `void print number(int n);`      |

## Tasks :page_with_curl:

* **0. isupper**
  * [0-isupper.c](./0-isupper.c): C program that checks for uppercase character. Returns `1` if `c` is uppercase. Returns `0` otherwise.

* **1. isdigit**
  * [1-isdigit.c](./1-isdigit.c): C function that checks for a digit (0 through 9). Returns `1` if `c` is a digit, `0` otherwise.

* **2. Collaboration is multiplication**
  * [2-mul.c](./2-mul.c): C function that multiplies 2 numbers.

* **3. The numbers speak for themselves**
  * [3-print_numbers.c](./3-print_numbers.c): C function that prints the numbers, from `0` to `9`, followed by a new line. 

* **4. I believe in numbers and signs**
  * [4-print_most_numbers.c](./4-print_most_numbers.c): C function that prints the numbers, from `0` to `9`, followed by a new line, except 2 and 4.

* **5. Numbers constitute the only universal language**
  * [5-more_numbers.c](./5-more_numbers.c): C function that prints 10 times the numbers, from `0` to `14`, followed by a new line.

* **6. The shortest distance between two points is a straight line**
  * [6-print_line.c](./6-print_line.c): C function that prints a straight line.

* **7.  I feel like I am diagonally parked in a parallel universe**
  * [7-print_diagonal.c](./7-print_diagonal.c): C function that prints a diagonal line on the terminal.

* **8. You are so much sunshine in every square inch**
  * [8-print_square.c](./8-print_square.c): C function that prints a square of hashes on the terminal.

* **9. Fizz-Buzz**
  * [9-fizz_buzz.c](./9-fizz_buzz.c): C function that prints the numbers from `1` to `100`, followed by a new line. But for multiples of three print Fizz instead of the number and for the multiples of five print Buzz. For numbers which are multiples of both three and five print FizzBuzz. Each number or word should be separated by a space

* **10. Triangles**
  * [10-print_triangle.c](./10-print_triangle.c): C function that pri.

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
