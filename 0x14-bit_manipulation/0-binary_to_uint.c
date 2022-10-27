#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: pointer to character
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	unsigned int k, i;
	int c;

	k = 1;
	i = 0;
	len = _strlen(b);
	if (b == NULL)
		return (0);
	for (c = len - 1; c >= 0; c--)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
		{
			i = i + k;
		}
		k = k * 2;
	}
	return (i);
}

/**
 * _strlen - returns string length
 * @str: string arguement
 * Return: int
 */

int _strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
