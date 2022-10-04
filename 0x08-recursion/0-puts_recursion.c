#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - writes a string
 * @s: array input parameter to output
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_putchar(s[0]);
		_putchar(s + 1);
	}
}
