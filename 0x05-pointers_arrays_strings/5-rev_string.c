#include "main.h"

/**
 * rev_string - a function that reverses a string.
 * @s: string been reversed.
 */

void rev_string(char *s)
{
	int lent = 0;

	int i = 0;

	int j = lent - 1;

	while (s[lent] != '\0')
	{
		lent++;
	}
	while (i < j)
	{
		char trip = s[i];

		s[i] = s[j];
		s[j] = trip;
		i++;
		j--;
	}
}
