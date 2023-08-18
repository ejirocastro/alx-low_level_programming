#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - function that prints numbers
 * @separator: string to be printed
 * @n: numbers to be printed
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ag;
	unsigned int i;
	unsigned int temp = 0;

	va_start(ag, n);

	for (i = 0; i < n; i++)
	{
		temp = va_arg(ag, int);
		printf("%d", temp);

	if (i < (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	printf("\n");
	va_end(ag);
}
