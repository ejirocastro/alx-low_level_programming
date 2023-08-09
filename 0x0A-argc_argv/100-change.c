#include <stdlib.h>
#include <stdio.h>

/**
 * main - Entry point
 * @argc: argument count
 * @argv: arguments on command line
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int payment[] = {25, 10, 5, 2, 1};
	int amtpayment = sizeof(payment) / sizeof(payment[0]);
	int temp = 0;
	int amount = 0;
	int c;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount = atoi(argv[1]);
	if (amount <= 0)
	{
		printf("0\n");
		return (0);
	}
	for (c = 0; c < amtpayment; c++)
	{
		if (amount >= payment[c])
		{
			int amt = amount / payment[c];
		temp += amt;
		amount -= payment[c] * amt;
		}
	}
	printf("%d\n", temp);
	return (0);
}
