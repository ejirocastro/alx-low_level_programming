#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * Return: 0 if big endian
 */

int get_endianness(void)
{
	char *b;
	int a = 1;

	b = (char *)&a;
	return (*b);
}
