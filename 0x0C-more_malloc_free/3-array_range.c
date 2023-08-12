#include <stdlib.h>
#include "main.h"

/**
 * array_range - function that creates an array of integers.
 * @min: minimum value
 * @max: maximum value
 * Return: the pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int temp = 0;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	temp = max - min + 1;

	arr = malloc(temp * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < temp; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
