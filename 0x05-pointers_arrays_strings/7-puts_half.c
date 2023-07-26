#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: string to be printed
 */

void puts_half(char *str)
{
	int a, n, longi;

	longi = 0;

	for (a = 0; str[a] != '\0'; a++)
	{
		longi++;
	}

	if (longi % 2 == 0)
	{
	n = longi / 2;

	for (a = n; str[a] != '\0'; a++)
	{
	_putchar(str[a]);
	}
	}
	else
	n = (longi - 1) / 2;
	for (a = n; str[a] != '\0'; a++)
	{
	_putchar(str[a]);
	}
	_putchar('\n');
}
