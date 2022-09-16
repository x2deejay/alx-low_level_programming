#include "main.h"

/**
 * print_diagonal - This function draws diagonal lines
 * @n: Length of diagonal
 * Return: 0
 */

void print_diagonal(int n)
{
	while (n-- > 0)
	{
		_putchar('\\');
		_putchar('\n');
	}
	return (0);
}
