#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - print an array of integers
 *
 * @array: the array to print
 * @size: the size of the array
 *
 * Return: nothing!
 */
void print_array(int *array, size_t size)
{
	size_t i;

	if (!(array && size))
		return;

	for (i = 0; i < size - 1; i++)
		printf("%i, ", array[i]);
	printf("%i\n", array[i]);
}

/**
 * exponential_search - finds an element in an array using exponential search
 *
 * @array: an array of integers
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: the index where @value was found or -1 if not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t h, l = 0, m;

	if (!(array && size))
		return (-1);

	for (h = 1; h < size && array[h] < value; h *= 2)
	{
		printf("Value checked array[%lu] = [%i]\n", h, array[h]);
		l = h;
	}
	h = MIN(h, size - 1);
	printf("Value found between indexes [%lu] and [%lu]\n", l, h);

	while (l <= h)
	{
		printf("Searching in array: ");
		print_array(&array[l], (h - l) + 1);
		m = (double)((l + h) / 2);
		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			l = m + 1;
		else
			h = m - 1;
	}
	return (-1);
}
