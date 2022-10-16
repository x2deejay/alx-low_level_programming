#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - function returns memory addresses and initializes
 * @height: array height parameter
 * @width: array width parameter
 * Return: pointer
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j, k;

	ptr = malloc(sizeof(*ptr) * width);
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		ptr[i] = malloc(sizeof(**ptr) * height);
	}
	for (j = 0; j < height; j++)
	{
		for (k = 0; k < width; k++)
		{
			ptr[j][k] = 0;
		}
	}
	return (ptr);
}
