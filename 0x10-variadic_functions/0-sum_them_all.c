#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum
 * @n: parameters to be summed
 * Return: Always 0 (success)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ag;
	unsigned int i;
	unsigned int add = 0;

	va_start(ag, n);

	for (i = 0; i < n; i++)
	{
		add += va_arg(ag, int);
	}
	va_end(ag);

	return (add);
}
