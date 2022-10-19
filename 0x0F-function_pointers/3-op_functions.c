#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - sum of two integers
 * @a: first input
 * @b: second input
 * Return: sum
 */

int op_add(int a, int b)
{
	int c;

	c = a + b;
	return (c);
}

/**
 * op_sub - subtracts from two integers
 * @a: first input
 * @b: second input
 * Return: difference
 */

int op_sub(int a, int b)
{
	int c;

	c = a - b;
	return (c);
}

/**
 * op_mul - multiplies two integers
 * @a: first input
 * @b: second input
 * Return: Multiple
 */

int op_mul(int a, int b)
{
	int c;

	c = a * b;
	return (c);
}

/**
 * op_div - divides two integers
 * @a: first input
 * @b: second input
 * Return: Division
 */

int op_div(int a, int b)
{
	int c;

	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	c = a / b;
	return (c);
}

/**
 * op_mod - remainder between two integers
 * @a: first input
 * @b: Second input
 * Return: remainder
 */

int op_mod(int a, int b)
{
	int c;

	if (!b)
	{
		printf("Error\n");
		exit(100);
	}
	c = a % b;
	return (c);
}
