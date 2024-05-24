#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - print an array of integers
 *
 * @array: array
 * @size: size
 *
 * Return: nothing
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
 * advanced_binary - searches for a value in a list using the binary search
 * algorithm.
 *
 * @array: array
 * @size: size
 * @value: value
 *
 * Return: the index of the first @value
 */
int advanced_binary(int *array, size_t size, int value)
{
	int m, index;

	if (!(array && size))
		return (-1);

	printf("Searching in array: ");
	print_array(array, size);
	m = (size - 1) / 2;

	if (value == array[m])
	{
		if ((m > 0 && array[m - 1] != value) || (m == 0))
			return (mid);
		return (advanced_binary(array, size - (m + 1), value));
	}
	else if (value < array[m])
		return (advanced_binary(array, size - (m + 2), value));

	index = advanced_binary(
		array + m + 1, size - (m + 1), value);
	if (index > -1)
		return ((m + 1) + index);
	return (-1);
}
