#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point for program execution
 * Description: Prints all single digit numbers of base10 using putchar
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}
