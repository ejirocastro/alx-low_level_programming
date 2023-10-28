#include "main.h"

/**
 * clear_bit - function that sets the value of a bit to 0
 * @n: unsigned long int
 * @index: unsigned int
 * Return: 1 if it worked
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
		*n &= ~(1 << index);
		return (1);
}
