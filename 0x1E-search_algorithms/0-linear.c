#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - searches for a value
 *
 * @array: array of numbs
 * @size: size
 * @value: the value to search
 *
 * Return: the index where @value -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t x;

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%lu] = [%i]\n", x, array[x]);
		if (value == array[x])
			return (x);
	}
	return (-1);
}
