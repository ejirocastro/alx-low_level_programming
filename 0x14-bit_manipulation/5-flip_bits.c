#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @m: unsigned long int
 * @n: unsigned long int
 * Return: temp
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x, y;
	int i, temp = 0;

	y = n ^ m;
	for (i = 63; i >= 0; i--)
	{
		x = y >> i;
		if (x & 1)
		{
			temp++;
		}
	}
	return (temp);
}
