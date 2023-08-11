#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenates two strings
 * @s1: destination
 * @s2: source string
 * @n: amount of byte allocated
 * Return: NULL if it fails & a pointer otherwise
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len = strlen(s1);
	unsigned int len2 = strlen(s2);
	char *cat;

	if (s1 == NULL)
	{
		s1 = " ";
	}
	if (s2 == NULL)
	{
		s2 = " ";
	}
	if (n >= len2)
	{
		n = len2;
	}
	cat = malloc(sizeof(len + n + 1));

	if (cat == NULL)
	{
		return (NULL);
	}
	strcpy(cat, s1);
	strncpy(cat + len, s2, n);
	cat[len + n] = '\0';

	return (cat);
}

