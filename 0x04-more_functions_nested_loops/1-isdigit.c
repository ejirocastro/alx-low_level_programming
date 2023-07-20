#include <ctype.h>

/**
 * _isdigit - function that checks for a digit
 * @c: the character too be checked
 * Return: 1 if c is a digit or 0 otherwise
 */
int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
