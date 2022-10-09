#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - returns the square root of a natural number
 * @n: input parameter
 * Return: int
 */

int _sqrt_rec(int k, int n)
{

	int next_k;

	next_k = (k + n / k) / 2;
	if (k * k <= n && (k + 1) * (k + 1) > n)
	{
		return (k);
	}
	else
	{
		return (_sqrt_rec(next_k, n));
	}
}

int _sqrt_recursion(int n)
{
	return (_sqrt_rec(1, n));
}
