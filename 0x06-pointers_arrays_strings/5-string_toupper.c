#include "main.h"

/**
 * string_toupper - a function that changes all lowercase
 * @c: pointers variable
 * Return: a character
 */

char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
	if (c[i] >= 97 && c[i] <= 122)
	{
	c[i] = c[i] - 32;
	}
	}
	return (c);
}
