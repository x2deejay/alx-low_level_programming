#include "main.h"

/**
 * _isupper - fuctions returns 1 is if upper and 0 if lower
 * @c: Function input
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
