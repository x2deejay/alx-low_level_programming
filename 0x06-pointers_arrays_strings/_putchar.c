#include <unistd.h>

/**
 * _putchar - prints character to stdout
 * @c: Input character
 * Return: Return -1 if error encountered and
 * 1 if successful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
