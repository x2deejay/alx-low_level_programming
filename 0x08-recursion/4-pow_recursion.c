#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - Returns the exponent of a number
 * @x: base parameter
 * @y: pow parameter
 * Return: int
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
