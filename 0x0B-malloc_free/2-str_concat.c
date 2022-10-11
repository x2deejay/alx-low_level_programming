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
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
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
	int i, s1_len, s2_len;

	s1_len = _strlen(s1);
	s2_len = _strlen(s2);
	printf("s1_len = %d and s2_len = %d\n", s1_len, s2_len);

	i = 0;
	while (s2[i])
	{
		s1[s1_len] = s2[i];
		i++;
	}
	return (s1);
}
