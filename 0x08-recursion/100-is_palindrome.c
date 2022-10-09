#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * is_palindrome_rec - checks palindrome with two additonal parameters
 * @l: first character parameter
 * @r: last character parameter
 * @s: array input parameter
 * Return: 1 if palindrome and 0 is not palindrome
 *
 */

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

/**
 * is_palindrome - checkes if string is palindrome
 * @s: array to check
 * Return: return 1 if palindrome and 0 if not
 */

int is_palindrome(char *s)
{
	if (is_palindrome_rec(s, 0, strlen(s) - 1))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
