#include <ctype.h>
/**
 * _islower - checks lowercases
 * @c: The character to be checked
 * Return: 1 for lowercase or 0 for anything else
 */
int _islower(int c)
{

	if (islower(c))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
