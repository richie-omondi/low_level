#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * C File Handling
 * 1. Stream-oriented data files - the data is stored in the same manner as it appears on the screen eg I/O operations ie buffering , data conversions
 * 2. System-oriented data files - the data files are more closely associated with the OS and data stored in memory without converting to text format
 *
 * C File operations are:
 * Creating a file, Opening a file, Reading a File, Writing to a file, Close the File
 *
 * Steps for processing a file:
 *
 * 1. Declare a file pinter variable.
 * 2. Open a file using fopen()
 * 3. Process the file using the suitable function.
 * 4. Close the file using fclose()
 *
 * Functions used to handle files in the stdio library:
 *
 * fopen(), fclose(), getc(), putc(), getw(), putw(), fprintf(), fscanf(), fgets(), feof()
 *
 */

int main()
{
	FILE *fp;
	fp = fopen("filename.txt", "w");
	/* processing the file */
	fprintf(fp, "%s", "Hello World");
	/* end of processing */
	fclose(fp);
	return 0;
