# C - File I/O

In this project, I practiced working with file handing, file manipulation, file descriptors and system calls.

## Header File :file_folder:

* [main.h](./main.h): Header file containing definitions and prototypes for all types
and functions written for the project.

## Tasks :page_with_curl:

* **0. Tread lightly, she is near**
  * [0-read_textfile.c](./0-read_textfile.c): Write a function that reads a text file and prints it to the `POSIX` standard output.
    * where `letters` is the number of letters it should read and print
    * returns the actual number of letters it could read and print
    * if the file can not be opened or read, return `0`
    * if filename is `NULL` return `0`
    * if write fails or does not write the expected amount of bytes, return `0`

* **1. Under the snow**
  * [1-create_file.c](./1-create_file.c): Create a function that creates a file.
    * where `filename` is the name of the file to create and `text_content` is a `NULL` terminated string to write to the file
    * Returns: `1` on success, `-1` on failure (file can not be created, file can not be written, write “fails”, etc…)
    * The created file must have those permissions: `rw-------.` If the file already exists, do not change the permissions.
    * if the file already exists, truncate it
    * if filename is `NULL` return `-1`
    * if `text_content` is `NULL` create an empty file

* **2. 10**
  * [2-get_bit.c](./2-get_bit.c): C function that returns the value of a bit at a given index.

* **3. 11**
  * [3-set_bit.c](./3-set_bit.c): C function that sets the value of a bit to `1` at a given index.

* **4. 100**
  * [4-clear_bit.c](./4-clear_bit.c): C function that sets the value of a bit to `0` at a given index.
