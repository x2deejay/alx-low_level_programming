#include "main.h"

/**
 * print_square - This function prints square
 * @size: Input parameter
 * Return: 0
 */

int main(void)
{
	print_square(2);
	print_square(10);
	print_square(0);
	return (0);
}

void print_square(int size)
{
	int row;
	int col;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0 ; row < size; row++)
		{
			for (col = 0; col < (size -1); col++)
			{
				_putchar('#');
			}
			_putchar('#');
			_putchar('\n');
		}
	}
}
