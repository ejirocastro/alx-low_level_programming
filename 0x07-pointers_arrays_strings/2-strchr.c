#include "main.h"
/**
 * _strchr - function that fills memory with a constant byte
 * @s: pointr
 * @c: character to be looked for
 * Return: 0 (success)
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
