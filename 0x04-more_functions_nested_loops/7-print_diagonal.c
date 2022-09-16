#include "main.h"

/**
 * print_diagonal - This function draws diagonal lines
 * @n: Length of diagonal
 * Return: 0
 */

void print_diagonal(int n)
{
	int len;
	int space;

	if (n > 0)
	{
		for (len = 0; len < n; n++)
		{
			for (space = 0; space < len; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (len == (n - 1))
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
