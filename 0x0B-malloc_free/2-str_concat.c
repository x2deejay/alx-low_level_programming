#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strlen - returns string length
 * @s: string parameter
 * Return: string lenth
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
 * str_concat - concatenates string and returns a pointer
 * to memory containing concatenates
 * @s1: first string parameter
 * @s2: second string parameter
 * Return: Returnsi a pointer
 */

char *str_concat(char *s1, char *s2)
{
	int s1_len, s2_len, total_len;
	char *saved, *ptr;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	total_len = s1_len + s2_len;
	ptr = malloc(sizeof(char) * (total_len + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	saved = ptr;
	while (*s1 != '\0')
	{
		*ptr = *s1;
		ptr = ptr + 1;
		s1 = s1 + 1;
	}
	while (*s2 != '\0')
	{
		*ptr = *s2;
		ptr = ptr + 1;
		s2 = s2 + 1;
	}
	*ptr = '\0';
	return (saved);
}
