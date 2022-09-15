#include "main.h"

/**
 * Description - This fuctions returns 1 is if upper and 0 if lower
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
