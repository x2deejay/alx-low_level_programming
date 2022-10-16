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
	char *saved;

	ptr = malloc(size);
	if (size == 0)
		return (NULL);
	saved = ptr;
	while (size > 0)
	{
		*ptr = c;
		ptr = ptr + 1;
		size--;
	}
	return (saved);
}
