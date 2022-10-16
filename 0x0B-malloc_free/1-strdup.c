#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns string length
 * @s: Input string
 * Return: len
 */

int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len = len + 1;
		s = s + 1;
	}
	return (len);
}

/**
 * _strdup - returns a pointer to a newly alloted space in
 * memory and contains string given as parameter
 * @str: String parameter
 * Return: saved
 */

char *_strdup(char *str)
{
	int len;
	char *ptr;
	char *saved;

	len = _strlen(str);
	ptr = malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	saved = ptr;
	while (*str != '\0')
	{
		*ptr = *str;
		ptr = ptr + 1;
		str = str + 1;
	}
	*ptr = '\0';
	return (saved);
}
