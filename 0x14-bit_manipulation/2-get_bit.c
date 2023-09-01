#include "main.h"

/**
 * get_bit -  returns the value of a bit at a given index.
 * @index: value of given index
 * @n: integer
 * Return:  value of the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp = 1UL << index;


	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n & temp) ? 1 : 0);
}
