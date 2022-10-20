#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers with separator
 * @separator: separator
 * @n: Number of variadic arguements
 * Return: inputed integers with separator
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(ap, int));
		{
			if (separator && i < n)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(ap);
	printf("\n");
}
