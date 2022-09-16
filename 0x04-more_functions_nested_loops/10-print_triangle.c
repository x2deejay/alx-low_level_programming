#include "main.h"

/**
 * print_triangle - This function prints triangle
 * @size: size of triangle
 * Return: 0
 */

void print_triangle(int size)
{
	int row;
	int col;

	if (size > 0)
	{
		for (row = 0; row <= size; row++)
		{
			for ((col = size - row); col > 0; col--)
			{
				_putchar(' ');
			}
			for (col = 0; col < row; col++)
			{
				_putchar('#');
			}
			if (row == size)
			{
				continue;
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}