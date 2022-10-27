#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary representation of a number
 * @n: arguement
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i;
	unsigned long int j, k, andmask;

	for (i = 7; i >= 0; i--)
	{
		j = i;
		andmask = 1 << j;
		k = n & andmask;
		if (k != 0)
			_putchar('1');
		else
			_putchar('0');
	}
}
