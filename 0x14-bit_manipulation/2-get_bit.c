#include "main.h"

/**
 * get_bit - function that returns the value of a bit
 * @n: usigned long int
 * @index: the bit you want to get
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len;
	unsigned long temp;

	len = sizeof(unsigned long int) * 8;
	if (index >= len)
	{
		return (-10);
	}
	temp = 1UL << index;
	return ((n & temp) != 0);
}
