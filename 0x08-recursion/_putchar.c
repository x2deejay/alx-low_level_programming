#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: input parameter
 * Return: returns 1 if successful and -1 if 
 * unsuccessful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
