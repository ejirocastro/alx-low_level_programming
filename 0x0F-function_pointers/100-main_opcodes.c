#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argv: arguments passed
 * @argc: argument count
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int x, nbytes;
	char *code = (char *) main;


	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nbytes = atoi(argv[1]);

	if (nbytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (x = 0; x < nbytes; x++)
	{
		printf("%02x", code[x] & 0xFF);
		if (x != nbytes - 1)
			printf(" ");
	}
	printf("\n");
	return (0);
}
