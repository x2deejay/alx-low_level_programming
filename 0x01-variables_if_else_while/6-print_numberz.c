#include <stdio.h>

/**
 * main - main is the entry point
 * Description: This program runs main and outputs
 * 0123456789 in base 10
 * Return: 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
