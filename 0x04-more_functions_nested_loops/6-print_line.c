#include "main.h"

/**
 * print_line - This function draws a straight line
 * @n: length of line
 * Return: 0
 */

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
