#include <stdio.h>
#include <string.h>

/**
 * print_rev -  a function that prints a string, in reverse.
 * @s: length of string in reverse
 */

void print_rev(char *s)
{
	int lent = strlen(s);

	int i = 0;

	int j = lent - 1;

	while (i < j)
	{
		char temp = s[i];

		s[i] = s[j];
		s[j] = temp;
		i++;
		j--;
		puts(s);
	}
}
