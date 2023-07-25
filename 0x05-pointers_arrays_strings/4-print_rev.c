#include <stdio.h>
#include <string.h>

/**
 * print_rev -  a function that prints a string, in reverse.
 * @s: length of string in reverse
 */

void print_rev(char *s)
{
	int len = strlen(s);

	int i = 0;

	for (i = 0; i < len / 2; i++)
	{
		char j = s[i];

		s[i] = s[len - 1 - i];
		s[len - 1 - i] = j;
	}
	s[len] = '\0';
	puts(s);

}
