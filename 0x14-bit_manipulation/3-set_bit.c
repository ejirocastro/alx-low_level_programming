#include "main.h"

/**
 * set_bit -  function that sets the value of a bit
 * @index: given index
 * @n: unsigned long int
 * Return: i if it works
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	*n |= temp;
	return (1);
}
