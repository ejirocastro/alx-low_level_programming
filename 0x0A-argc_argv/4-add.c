#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments
 * Return: 0 or 1 if the line contains symbol
 */

int main(int argc, char *argv[])
{
	int m = 0;
	int sum = 0;

	for (m = 1; m < argc; m++)
	{
		int n;

		for (n = 0; argv[m][n] != '\0'; n++)
		{
			if (!isdigit(argv[m][n]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[m]);
	}
	printf("%d\n", sum);
	return (0);
}
