#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - print an array of integers
 *
 * @array: array
 * @size: size of array
 *
 * Return: nothing!
 */
void print_array(int *array, size_t size)
{
	size_t x;

	if (!(array && size))
		return;

	for (x = 0; x < size - 1; x++)
		printf("%x, ", array[x]);
	printf("%x\n", array[x]);
}

/**
 * binary_search - searches a value using the binary search
 * algorithm
 *
 * @size: size
 * @array: array of numbers(int)
 * @value: value to search for
 *
 * Return: the index at which @vaoue was found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t y;
	int z, index;

	if (size == 0)
		return (-1);

	printf("Searching in array: ");
	print_array(array, size);
	y = (size - 1) / 2;
	z = array[y];

	if (value == z)
		return (y);
	else if (value < z)
		return (binary_search(array, size - (y + 2), value));
	index = binary_search(
		array + y + 1, size - (y + 1), value);
	if (index > -1)
		return ((y + 1) + index);
	return (-1);
}
