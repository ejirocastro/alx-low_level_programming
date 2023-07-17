#include <stdio.h>
/**
 * main - Entry ponit
 * Return: Always 0 (success)
 */
int main(void)
{
	char x;

	for (x = 'a'; x <= 'Z'; x++)
		if (x != 'q' && x != 'e')
			putchar(x);
	putchar('\n');
	return (0);
}
