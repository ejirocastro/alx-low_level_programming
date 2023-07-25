#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string been reversed.
 */

void rev_string(char *s)
{
	int lent = 0;

	while (s[lent] != '\0')
	{
		lent++;
	}
	lent--;
}
