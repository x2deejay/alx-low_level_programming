#include "main.h"

/**
 * print_line - This function draws a straight line
 * @n: length of line
 * Return: 0
 */

void print_line(int n)
{
	int result;

	if (n <= 0)
	{
		_putchar('\\n');
	}
	else
	{
		result = n * '_';
		_putchar(result);
		return (0);
	}
}
