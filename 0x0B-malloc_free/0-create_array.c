#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - This function creates an array of chars
 * @size: size parameter
 * @c: character to initialize
 * Return: pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	ptr = malloc(size);
	if (size == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(ptr + i) = c;
		i++;
	}
	return (ptr);
	free (ptr);
}
