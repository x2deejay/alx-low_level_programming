#include <stdio.h>
#include "main.h"

int is_palindrome_rec(char *s, int l, int r)
{

	if (s == NULL || l < 0 || r < 0)
	{
		return (0);
	}
	if (l >= r)
	{
		return (1);
	}
	if (s[l] == s[r])
	{
		return (is_palindrome_rec(s, l + 1, r - 1));
	}
	return (0);
}

int is_palindrome(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	if (is_palindrome_rec(s, 0, i - 1))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
