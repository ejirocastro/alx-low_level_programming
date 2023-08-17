#include "function_pointers.h"

/**
 * array_iterator - executes a function given as parameter
 * @array: hold elements
 * @size: size of array
 * @action: pointer function
 * Return: void always
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array != NULL && size > 0 && action != NULL)
	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
