#include "main.h"

/**
 * _puts - Prints a string of letters to stdout
 * @str: Input parameter
 * Return: void
 */

void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] < '\0')
	{
		_putchar(stri[i]);
		i++;
	}
	_putchar('\n');
}
