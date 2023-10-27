#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to unsigned int
 * @b: pointer to 0 and 1
 * Return: he converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int temp = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		temp = (temp << 1) | (*b - '0');
		b++;
	}
	return (temp);
}
