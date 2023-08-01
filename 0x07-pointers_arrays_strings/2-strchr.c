#include "main.h"
/**
 * _strchr - function that fills memory with a constant byte
 * @s: it is a string pointer
 * @c: character to be looked for
 * Return: a pointer to the first occurrence char 'c'
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *s != '\0'; i++)
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}
	return (0);
}
