#include <stdio.h>
#include "main.h"

/**
 * main - a function that print program name
 * @argc: the argument count
 * @argv: the agument vector
 * Return: Always 0 (success)
 */

int  main(int argc, char *argv[])
{
	while (argc--)
		printf("%s\n", argv[0]);
	return (0);
}
