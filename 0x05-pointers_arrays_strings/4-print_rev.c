#include "main.h"

/**
 * print_rev -  a function that prints a string, in reverse.
 * @s: length of string in reverse
 */

void print_rev(char *s)
{
	int lent;

	lent = 0;

	while (s[lent] != '\0')
	{
		lent++;
	}
	lent--;
	while (lent >= 0)
	{
		_putchar(s[lent]);
		lent--;
	}
	_putchar('\n');
}
