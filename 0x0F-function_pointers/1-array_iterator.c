#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter
 * @array: hold elements
 * @size: size of array
 * @action: pointer function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
