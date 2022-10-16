#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * free_grid - frees allocated grid
 * @grid: pointer to a pointer parameter
 * @height: height parameter
 * Return: nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	grid = malloc(sizeof(*grid) * height);
	for (i = 0; i < height; i++)
	{
		free(*grid);
	}
}
