#include "search_algos.h"
#include <stdio.h>

/**
 * _interpolation_search - helper function
 *
 * @array: array
 * @hi: the high index
 * @lo: the low index
 * @value: value to be searched
 *
 * Return: the index where @value is found or -1 if not found.
 */
int _interpolation_search(int *array, int hi, int lo, int value)
{
	int pos;

	if (lo <= hi && value >= array[lo])
	{
		/* get position */
		pos = lo + ((
			(double)(hi - lo) /
			(array[hi] - array[lo])) *
			(value - array[lo])
		);

		/* check if target has been found */
		if (pos > hi)
		{
			printf("Value checked array[%i] is out of range\n",
				pos);
			return (-1);
		}
		printf("Value checked array[%i] = [%i]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			return (_interpolation_search(
				array, hi, pos + 1, value
			));
		else
			return (_interpolation_search(
				array, pos - 1, lo, value
			));
	}
	return (-1);
}

/**
 * interpolation_search - searches for an element in an array using
 * interpolation search algorithm
 *
 * @array: array
 * @size: size
 * @value: value searched
 *
 * Return: the index where @value is found or -1 if not found.
 */
int interpolation_search(int *array, size_t size, int value)
{
	return (_interpolation_search(array, size - 1, 0, value));
}
