#include "main.h"
/**
 * print_last_digit - Display last digit of a number
 * @n: number to be evalauted
 * Return: Value of the last digits
 */
int print_last_digit(int n)
{
	int Last;

	Last = n % 10;
	if (Last < 0)
	{
		Last = Last * -1;
	}
	_putchar(Last + '0');
	return (Last);
}
