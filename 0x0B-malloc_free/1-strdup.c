#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly alloted space in
 * memory and contains string given as parameter
 * @str: String parameter
 * Return: returns pointer
 */

char *_strdup(char *str)
{
	char *ptr;
	int i, j, k;

	i = 0;
	while (str[i])
	{
		i++;
	}
	ptr = malloc(i);
	k = 0;
	j = 0;
	while (j < i)
	{
		*(ptr + j) = *(str + k);
		j++;
		k++;
	}
	return (ptr);
}
