#include "main.h"
#include <stdio.h>

/**
 * main - main entry point
 *
 * Description: This function prints absolute value
 * Return: 0
 */

int main(void)
{
	int r;

	r = _abs(-1);
	printf("%d\n", r);
	r = _abs(0);
	printf("%d\n", r);
	r = _abs(1);
	printf("%d\n", r);
	r = _abs(-98);
	printf("%d\n", r);
	return (0);
}

int _abs(int c)
{
	if (c <= 0)
	{
		return (c * -1);
	}
	else
	{
		return (c);
	}
}
