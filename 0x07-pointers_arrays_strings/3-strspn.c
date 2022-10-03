#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: array to find substring from
 * @accept: prefix substring parameter
 * Return: substring length
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	j = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{
			if (*(accept + j) == *(s + i))
			{
				break;
			}
			if (!accept[j])
			{
				break;
			}
			j++;
		}
		i++;
	}
	return (i);
}
