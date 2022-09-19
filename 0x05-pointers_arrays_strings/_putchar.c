#include <unistd.h>

/**
 * _putchar - prints character c to stdo
 * @c: Input parameter
 * Return: -1 if error and 1 if successful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
