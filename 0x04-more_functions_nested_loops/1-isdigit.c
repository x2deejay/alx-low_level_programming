#include "main.h"

/**
 * _isdigit - Checks whether a character is digit or not
 * @c: Tested character
 * Return: 1 if yes, 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
