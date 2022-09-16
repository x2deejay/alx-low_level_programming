#include "main.h"

/**
 * more_numbers - Prints decimal numbers in 10 lines
 * Return: 0
 */

void more_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		for (i = 48; i < 58; i++)
		{
			_putchar(i);
		}
		_putchar(10);
	}
	_putchar('\n');
}
