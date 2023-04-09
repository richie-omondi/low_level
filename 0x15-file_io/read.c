#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fileName; /* pointer variable for handling files in C*/
	char ch[100];
	fileName = fopen("filename.txt", "r");
	printf("%s\n", fgets(ch, 50, fileName));
	fclose(fileName);
	return 0;
}

/**
 * Reading from a file
 *
 * getc() - read a character from a file
 * getw() - reading from an integer
 * fgets() - reads string of characters from a file
 *
 * Writing to a file
 *
 * putc() - writes a character to a file
 * putw() - writes an integer to a file
 * fprintf()
 * fputs() - writes a string to a file
 */ 
