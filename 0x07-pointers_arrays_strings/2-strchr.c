#include <stdio.h>

/**
 * _strchr - finds character in a string
 * @s: array of character paarameter
 * @c: character to find
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	if (*(s + i) == c)
	{
		return (s + i);
	}
	return (0);
}
