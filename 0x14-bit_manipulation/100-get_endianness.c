#include "main.h"

/**
 * get_endianness - function that checks the endianness.
 * @void: nothing
 * Return: Always 0 success
 */

int get_endianness(void)
{
	unsigned int temp = 1;
	unsigned char *ptr = (unsigned char *)&temp;

	if (*ptr == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
