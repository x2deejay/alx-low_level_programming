#include <unistd.h>

/**
 * _putchar - returns character to stdout
 * @c: character input parameter
 * Return: Returns 1 if succesful and -1
 * if unsuccessful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
