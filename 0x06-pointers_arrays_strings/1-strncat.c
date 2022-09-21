#include "main.h"

/**
 * _strncat - Concantenates two strings but add inputed no in bytes
 * @dest: String to be appended upon
 * @src: String to be completed at end of dest
 * @n: Integer parameter to index to
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int dest_len;

	i = 0;
	dest_len = 0;
	while (dest[i++])
	{
		dest_len++;
	}
	for (i = 0; src[i] && i < n; i++)
	{
		dest[dest_len++] = src[i];
	}
	return (dest);
}

