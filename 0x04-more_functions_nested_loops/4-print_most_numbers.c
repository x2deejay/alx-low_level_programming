#include "main.h"

/**
 * print_most_numbers - prints decimal digits except 2 and 4
 * Return: 0
 */

void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			break;
		}
		_putchar(i);
		_putchar('\n');
	}
}
