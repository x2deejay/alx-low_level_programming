#include <stdio.h>
/**
 * main - Mian entry point
 *
 * Description: Pints out all lower case
 * @n: lower case input
 * Return: 0
 */
int main(void)
{
	char n;

	for (n = 'a' ; n <= 'z' ; n++)
	{
		putchar (n);
	}
	putchar('\n');
	return (0);
}
