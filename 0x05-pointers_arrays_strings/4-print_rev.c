#include "main.h"

/**
 * print_rev - prints string in reverse
 * @str: Input string pointer
 * Return: void
 */

void print_rev(char *str)
{
	int j;
	int i;
	int k;

	j = 0;
	while (str[j] != '\0')
	{
		j++;
	}

	i = 0;
	k = j;
	while (i <= k)
	{
		_putchar(str[k]);
		k--;
	}
	_putchar('\n');
}
