#include <unistd.h>

/**
 * _putchar - writes output to stdout
 * @c: character input parameter
 * Return: 1 if successful and -1 if 
 * error enountered.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
