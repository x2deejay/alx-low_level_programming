#include "main.h"

/**
 * swap_int - This function swaps two locations of an input pointer parameter
 * @a: Input parameter
 * @b: Input parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp;
	*a = b;
	*b = a;

	temp = b;
	b = a;
	a = temp;
	_putchar(a);
	_putchar(b);
}
