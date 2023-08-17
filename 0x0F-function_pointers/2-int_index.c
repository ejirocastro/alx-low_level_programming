#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: points to an array of integer
 * @size: size of the array
 * @cmp: points to comparism function
 * Return: Always 0 (success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (size <= 0 || !(array) || !(cmp))
	{
		return (-1);
	}
	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]) != 0)
		{
			return (n);
		}
	}
	return (-1);
}

