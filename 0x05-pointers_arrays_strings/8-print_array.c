#include <stdio.h>
#include "main.h"

/**
 * print_array - prints an array of n elements
 * @n: number of elements
 * @a: array name
 * Return: void
 */

void print_array(int *a, int n)
{
	int inc;

	for (inc = 0; inc < n; inc++)
	{
		if (inc != n - 1)
		{
			printf("%d, ", a[inc]);
		}
		else
		{
			printf("%d", a[inc]);
		}
		_putchar(10);
	}
}
