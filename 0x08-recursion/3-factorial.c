#include <stdio.h>
#include "main.h"

/**
 * factorial - prints the factorial of a number
 * @n: Input parameter
 * Return: int
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
