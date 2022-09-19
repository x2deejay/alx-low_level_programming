#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * @str: Input string pointer
 * Return: void
 */

void print_rev(char *str)
{
	int count;
	int i;
	char temp;
	int middle;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	middle = count / 2;
	for (i = 0; i < middle; i++)
	{
		temp = str[i];
		str[i] = str[count - i - 1];
		str[count - i - 1] = temp;
	}
}
