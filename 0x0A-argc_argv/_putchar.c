#include <unistd.h>

/**
 * _putchar - sends character to stout
 * @c: input character
 * Return: returns 1 if successful and -1 
 * if error encountered
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
