#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character arguement
 * Return: returns 1 if successful and -1
 * if error is encountered
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
