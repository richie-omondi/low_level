# C -Recursion

This repo contains C software written to implement different recursive functions. There is no use of a standard library.

## Helper File :raised_hands:

* [_putchar.c](./_putchar.c): C function that writes a character to `stdout`.

## Header File :file_folder:

* [main.h](./main.h): Header file containing prototypes for all
functions written in the project.

| File                     | Prototype                                              |
| ------------------------ | --------------------------------                       |
| `0-puts_recursion.c`     | `void _puts_recursion(char *s);`                       |
| `1-print_rev_recursion.c`| `void _print_rev_recursion(char *s);`                  |
| `2-strlen_recursion.c`   | `int _strlen_recursion(char *s;`                       |
| `3-factorial.c`          | `int factorial(int n);`                                |
| `4-pow_recursion.c`      | `int _pow_recursion(int x, int y);`                    |
| `5-sqrt_recursion.c`     | `int _sqrt_recursion(int n);`                          |
| `6-is_prime_number.c`    | `int is_prime_number(int n;`                           |
| `8-print_diagsums.c`     | `void print_diagsums(int *a, int size);`               |
|                          |                                                        |

## Code :page_with_curl:

* **0. She locked away a secret, deep inside herself, something she once knew to be true... but chose to forget**
  * [0-puts_recursion.c](./0-puts_recursion.c): C function that prints a string, followed by a new line.

* **1. Why is it so important to dream? Because, in my dreams we are together**
  * [1-print_rev_recursion.c](./1-print_rev-recursion.c): C function that reverses a string.

* **2. Dreams feel real while we're in them. It's only when we wake up that we realize something was actually strange**
  * [2-strlen_recursion.c](./2-strlen_recursion.c): C function that returns the length of a string.
 
* **3. You mustn't be afraid to dream a little bigger, darling**
  * [3-factorial.c](./3-factorial.c): C function that calculates the factorial of a number.

* **4. Once an idea has taken hold of the brain it's almost impossible to eradicate**
  * [4-pow_recursion.c](./4-pow_recursion.c): C function that returns the value of x raised to the power of y.

* **5. Your subconscious is looking for the dreamer**
  * [5-sqrt_recursion.c](./5-sqrt_recursion.c): C function that returns the natural square root of a number
 
* **6. Chess is a mental toture**
  * [7-print_chessboard.c](./7-print_chessboard.c): C function that prints a chessboard

* **7. The line of life is a ragged diagonal between duty and desire**
  * [8-print_diagsums.c](./7-print_diagsums.c): C function that prints the sum of the two diagonals of a square matrix of integers.

* **8. Double pointer, double fun**
  * [100-set_string.c](./100-set_string.c): C function that sets the value of a pointer to a char

* **9. My primary goal of hacking was the intellectual curiosity, the seduction of adventure**
  * [101-crackme_password](./101-crackme_password): Create a file that contains the password for the [crackme2](https://github.com/holbertonschool/0x06.c) executable.
    * Your file should contain the exact password, no new line, no extra space
    * `ltrace`, `ldd`, `gdb` and `objdump` can help
    * You may need to install the `openssl` library to run the `crakme2` program: `sudo apt install libssl-dev`
    * Edit the source list `sudo nano /etc/apt/sources.list` to add the following line: `deb http://security.ubuntu.com/ubuntu xenial-security main` .Then `sudo apt update` and `sudo apt install libssl1.0.0`
