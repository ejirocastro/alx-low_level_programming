#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * void *_realloc - a function that reallocates a memory
 * @new_size: new memory
 * @old_size: edited memory
 * @ptr: pointer
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int x = 0;
	char *change;
	char *origin;

	if (ptr == NULL)
	{
		origin = ptr;
	}
	else
	{
		return (malloc(new_size));
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);

		return (0);
	}
	change = malloc(sizeof(new_size));

	if (change == NULL)
	{
		return (0);
	}
	for (x = 0; x < (old_size || x < new_size); x++)
	{
		*(change + x) = origin[x];
	}
	free(ptr);

	return (change);
}


