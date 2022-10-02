#include <stdio.h>
#include "main.h"

/**
 * _memset - This functions creates a specified memory space
 * @s: memrory allotted
 * @b: Bytes input parameter
 * @n: number of bytes to fill
 * Return: Returns alotted memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *ptr;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	ptr = s;
	return (ptr);
}
