#include "main.h"

/**
 * _strpbrk - function that searches a string
 * @s: string to be scanned
 * @accept: string containing the char match
 * Return: s
 */

char *_strpbrk(char *s, char *accept)
{
	int x;

	while (*s)
	{
	for (x = 0; accept[x]; x++)
	{
	if (*s == accept[x])
	return (s);
	}
	s++;
	}
	return ('\0');
}
