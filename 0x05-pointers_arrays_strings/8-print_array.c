#include <stdio.h>

/**
 * print_array - prints an array of n elements
 * @n: number of elements
 * Return: void
 */

void print_array(int *a, int n);

int main(void)
{
	int array[5];

	array[0] = 98;
	array[1] = 402;
	array[2] = -198;
	array[3] = 298;
	array[4] = -1024;
	print_array(array, 5);
	return (0);
}

void print_array(int *a, int n)
{
	printf("%d", a[n]);
}

