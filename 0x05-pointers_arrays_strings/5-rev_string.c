#include "main.h"
#include <string.h>

/**
 * rev_string - a function that reverses a string.
 * @s: string been reversed.
 */

void rev_string(char *s)
{
	int lent = strlen(s);

	int start = 0;

	int end = lent - 1;

	while (start < end)
	{
		char temp = s[start];

		s[start] = s[end];
		s[end] = temp;
		start++;
		end--;
	}
}
