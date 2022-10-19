#include <unistd.h>

/**
 * _putchar  - sends character to stout
 * @c: input character parameter
 * Return: 1 if successful, -1 if error encountered
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
