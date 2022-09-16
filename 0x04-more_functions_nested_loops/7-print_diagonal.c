#include "main.h"

/**
 * print_diagonal - This function draws diagonal lines
 * @n: Length of diagonal
 * Return: 0
 */

void print_diagonal(int n)
{
	int row;
	int col;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < n; row++)
		{
			for (col = 0; col < n; col++)
			{
				if (col == row)
				{
					_putchar('\\');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
}
