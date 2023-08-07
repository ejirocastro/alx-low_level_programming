#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number  of argument
 * @argv: arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i = 0;
	int j = 0;
	int result = 0;

	if (argc == 3)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		result = i * j;
		printf("%d\n", result);
		return (0);
	}
	else
	{
		printf("error\n");
	}
	return (1);
}
