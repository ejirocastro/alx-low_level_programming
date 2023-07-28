#include "main.h"

/**
 * reverse_array - a function that reverses the content of an array
 * @n: contains the number of element
 * @a: array name
 */

void reverse_array(int *a, int n)
{
	int i;

	int tain;

	i = 0;
	while (i < n--)
	{
	tain = a[i];
	a[i] = a[n];
	a[n] = tain;
	i++;
	}
}
