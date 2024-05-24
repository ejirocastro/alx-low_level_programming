#include "search_algos.h"
#include <stdio.h>
#include <math.h>


/**
 * jump_search - searches for a value in a sorted array of integers using
 * the jump search algorithm.
 *
 * @array: an array of integers
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: the index of the value if found, else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t l, h, b;

	if (!array || !size)
		return (-1);

	b = sqrt(size);
	l = h = 0;

	while (h < size && array[h] < value)
	{
		printf("Value checked array[%lu] = [%i]\n", h, array[h]);
		l = h;
		h += b;
	}

	printf("Value found between indexes [%lu] and [%lu]\n", l, h);
	h = MIN(h, size - 1);
	for (; l < h && array[l] < value; l++)
		printf("Value checked array[%lu] = [%i]\n", l, array[l]);
	printf("Value checked array[%lu] = [%i]\n", l, array[l]);

	if (array[l] == value)
		return (l);
	return (-1);
}
