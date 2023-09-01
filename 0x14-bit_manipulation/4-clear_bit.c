#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * @index: index starting from 0
 * @n: integer
 * Return: 1 if it worked
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int temp  = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8 || n == NULL)
	{
		return (-1);
	}
	*n &= ~temp;
	return (1);
}
