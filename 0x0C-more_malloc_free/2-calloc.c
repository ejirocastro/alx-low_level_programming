#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - function that allocates memory
 * @nmemb: number of element
 * @size: size in bytes
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(int) * (nmemb * size));

	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, (nmemb * size));
	{
	return (ptr);
	}
}
