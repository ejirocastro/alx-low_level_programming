#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	int al;

	srand(time(0));
	n = rand() - RAND_MAX  / 2;
	al = n % 10;
	if (al > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, al);
	else if (al == 0)
		printf("Last digit of %d is %d and is 0\n", n, al);
	else
		printf("Last digit of %d is %d and is less than 6 but not 0\n", n, al);
	return (0);
}
