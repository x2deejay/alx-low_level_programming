#include "main.h"

/**
 * _isdigit - This function checkes if an input is a digit
 * @C: Input parameter
 * Return: 0
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
