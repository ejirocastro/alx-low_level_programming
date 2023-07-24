#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers.
 * @a: one if the swapped variable
 * @b: the second variable been swapped
 */

void swap_int(int *a, int *b)
{
	int swap = *a;

		*a = *b;
		*b = swap;
}
