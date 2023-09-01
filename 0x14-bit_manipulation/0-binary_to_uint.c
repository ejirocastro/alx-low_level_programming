#include "main.h"

/**
 *  binary_to_uint - function that converts a binary number
 *  @b: pointer to char
 *  Return:  the converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j = 0;
	unsigned int come = 1;
	unsigned int out = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (b[j] != '\0')
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
		j++;
	}
	for (i = j - 1; i >= 0; i--)
		{
			out += (b[i] - '0') * come;
			come *= 2;
		}

		return (out);
}
