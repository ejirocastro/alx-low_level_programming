#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - function that prints strings
 * @separator: string to be printed
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ag;
	unsigned int i;
	char *temp = 0;

	va_start(ag, n);

	for (i = 0; i < n; i++)
	{
		temp = va_arg(ag, char *);
		if (temp == NULL)
			printf("nil");
		else
			printf("%s", temp);
		if (separator != NULL && i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ag);
}
