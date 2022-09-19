#include "main.h"

/**
 * _strlen - This function returns the length
 * of a string
 * @s: Input parameter
 * Return: Stirng lenth
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
