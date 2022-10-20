#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This function sums variadic arguements
 * @n: fixed arguement
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int sum, i;

	va_start(ap, n);
	sum = 0;
	if (!n)
		return (0);
	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
