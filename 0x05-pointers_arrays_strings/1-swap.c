#include "main.h"

/**
 * swap_int - This function swaps two locations of an input pointer parameter
 * @a: Input parameter
 * @b: Input parameter
 * Return: void
 */

void swap_int(int *a, int *b)
{
	*a = b;
	*b = a;
}
