#include "main.c"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Array input parameter
 * @n: Number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index > n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
