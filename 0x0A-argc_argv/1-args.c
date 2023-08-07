#include <stdio.h>

/**
 * main - Entry point of program
 * @argc: number of argument
 * @argv: arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}
	printf("%d\n", argc - 1);
	return (0);
}
