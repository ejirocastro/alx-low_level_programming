#include <stdlib.h>

/**
 * malloc_checked -  function that allocates memory
 * @b: element in array
 * Return: pointer(ptr)
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	else
	{
	return (ptr);
	}
}
