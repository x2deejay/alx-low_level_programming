#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * print_rev - prints string in reverse
 * @str: Input string pointer
 * Return: void
 */

void print_rev(char *str)
{
	int len = strlen(s);

	while (len--)
	{
		putchar(*(s + len));
	}
	putchar(10);
}
