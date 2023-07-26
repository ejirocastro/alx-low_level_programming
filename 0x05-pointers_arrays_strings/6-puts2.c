#include "main.h"
#include <stdio.h>

/**
 * puts2 - a function that prints every other character of a string
 * @str: string been printed
 */

void puts2(char *str)
{
	int temp = 0;

	int i = 0;

	while (str[i] != '\0')
	{
		temp++;
		i++;
	}
	puts(str);
}
