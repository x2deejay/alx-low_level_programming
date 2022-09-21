#include "main.h"
#include <stdio.h>

/**
 * _strcat - This function concantenates two strings
 * @dest: Input parameter
 * @src: Input parameter
 * Return: returns a character
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;
	
	while (dest[i++])
	{
		dest_len++;
	}
	for (i = 0; src[i]; i++)
	{
		dest[dest_len++] = src[i];
	}
	return (dest);
}
