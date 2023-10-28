#include "main.h"

/**
 * print_binary - function that prints the binary numbers
 * @n: usigned long integer
 * Return: binary conversion
 */

void print_binary(unsigned long int n)
{
	int x, size, f = 0;
	unsigned long int temp;

	size = sizeof(unsigned long int) * 8;
	for (x = size - 1; x >= 0; x--)
	{
		temp = 1UL << x;
		if ((n & temp) != 0)
		{
			_putchar('1');
			f = 1;
		}
		else if (f == 1)
		{
			_putchar('0');
		}
	}
	if (f == 0)
	{
		_putchar('0');
	}
}
