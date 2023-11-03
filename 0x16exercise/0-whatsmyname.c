#include <stdio.h>

/**
 * main - entry point of program
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d]: %s\n", i, argv[i]);
	}
	return (0);
}
