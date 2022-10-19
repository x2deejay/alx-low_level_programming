#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches and returns index in an array
 * @array: array to search
 * @size: size of array
 * @cmp: function pointer for search
 * Return: Int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0 && cmp && size && array)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
			{
				return (i);
			}

		}
	}
	return (-1);
}
