#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: destination parameter
 * @src: source parameter
 * @n: parameter for number of bytes to copy
 * Return: Returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
