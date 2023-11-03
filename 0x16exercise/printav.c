#include <stdio.h>

/**
 * main - Entry point of program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 ssucces
 */

int main(int argc, char *argv[])
{
	(void)argc;
	int i;

	for (i = 0; argv[i] != NULL; i++)
	{
		printf("argv[%d]: %s\n", i, argv[i]);
	}
	return (0);
}
