#include "main.h"

/**
 * puts_half - print half of characters
 * @str: Input parameter
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j = i / 2;
	while (i <= j)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
