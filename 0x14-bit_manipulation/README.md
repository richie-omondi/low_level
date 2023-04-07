# C - Bit Manipulation

In this project, I practiced working with bits, bitwise operators and bit manipulations.

## Header File :file_folder:

* [main.h](./main.h): Header file containing definitions and prototypes for all types
and functions written for the project.

## Tasks :page_with_curl:

* **0. 0**
  * [0-binary_to_uint.c](./0-binary_to_uint.c): Write a function that converts a binary number to an `unsigned int`.
    * where `b` is pointing to a string of `0` and `1` chars
    Return: the converted number, or `0` if
    there is one or more chars in the string `b` that is not `0` or `1`
    `b` is `NULL`

* **1. 1**
  * [1-print_binary.c](./1-print_binary.c): C function that prints the binary representation of a number.

* **2. 10**
  * [2-get_bit.c](./2-get_bit.c): C function that returns the value of a bit at a given index.

* **3. 11**
  * [3-set_bit.c](./3-set_bit.c): C function that sets the value of a bit to `1` at a given index.

* **4. 100**
  * [4-clear_bit.c](./4-clear_bit.c): C function that sets the value of a bit to `0` at a given index.

* **5. Free**
  * [5-free_listint2.c](./5-free_listint2.c): C function that frees a
  `listint_t` linked list.
    * Sets the `head` to `NULL`.

* **6. Pop**
  * [6-pop_listint.c](./6-pop_listint.c): C function that deletes the head node of
  a `listint_t` linked list.
    * If the linked list is empty - returns `0`.
    * Otherwise - returns the head node's data (`n`).

* **7. Get node at index**
  * [7-get_nodeint.c](./7-get_nodeint.c): C function that locates a given node
  of a `listint_t` linked list.
    * If the node does not exist - returns `NULL`.
    * Otherwise - returns the located node.
