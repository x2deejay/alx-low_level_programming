#include <unistd.h>

/**
 * _putchar - sents character to standard ouuput
 * @c: input parameter
 * Return: Return 1 on error -1 is returned
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
