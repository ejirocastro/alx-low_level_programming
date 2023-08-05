#include "main.h"
/**
 * _strchr - function that locates a character in a string
 * @s: strin pointer
 * @c: the character looked for
 * Return: s or 0
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	{
	return (s);
	}
	s++;
	}
	return (0);
}
