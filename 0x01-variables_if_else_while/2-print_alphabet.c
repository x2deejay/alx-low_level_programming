#include <stdio.h>
/**
 * main - Mian entry point
 *
 * Description: This program prints the alphabet 
 * abcdefghijklmnopqrstuvwxyz in lower case
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
