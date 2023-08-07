#include <stdio.h>

/**
 * main - Entry point of program
 * @argc: number of argument
 * @argv: arguments
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{

	printf("%d\n", argc - 1);
	argv[0] = 0;
	return (0);
}
