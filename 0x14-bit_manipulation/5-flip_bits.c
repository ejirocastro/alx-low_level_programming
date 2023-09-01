#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @m: unsigned long int2
 * @n: unsigned long int1
 * Return: Always (0) success
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int temp = n ^ m;

	while (temp > 0)
	{
		if (temp & 1)
		{
			i++;
		}
		temp >>= 1;
	}
	return (i);
}
