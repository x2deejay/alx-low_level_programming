#include "main.h"

/**
 * main - main entry point
 *
 * Description: This function prints multiplicative tables
 * Return: 0
 */

int main(void)
{
	times_table();
	return (0);
}

void times_table(void)
{
	int num;
	int mult;
	int prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');
			}
			_putchar((prod / 10) + '0');
		}
		_putchar('\n');
	}
}
