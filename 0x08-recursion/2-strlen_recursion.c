#include "main.h"

/**
 * _strlen_recursion - A function that return lent of a string.
 * @s: string to be returned.
 * Return: lent of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
