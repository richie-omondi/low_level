#include "main.h"

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 * If little-endian - 1.
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *)&x;

	if (*c)
		return (1);

	return (0);
}
