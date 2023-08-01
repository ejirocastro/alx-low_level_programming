#include <stddef.h>


/**
 * _strchr - a function that locates a character
 * @s: pointer to aa character
 * @c: character pointed at
 * Return: s or NULL if character not found.
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
	return (NULL);
}
