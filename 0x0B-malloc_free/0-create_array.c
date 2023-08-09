#include <stdlib.h>
#include "main.h"

/**
 * create_array - function that creates an array
 * @c: string to be created
 * @size: size of the array to be created
 * Return: Always 0 (success)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *create;

	create = malloc(size * sizeof(c));

	if (size == 0)
	{
		return (NULL);
	}
	if (create == 0)
	{
		return (NULL);
	}
	else
		for (i = 0; i < size; i++)
		{
			*(create + i) = c;
		}
	return (create);
}
