#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - This function executes on every element of
 * an array
 * @size: size of array
 * @array: array parameter
 * @action: function pointer parameter
 * Return: nothint
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	i = 0;
	if (array && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
