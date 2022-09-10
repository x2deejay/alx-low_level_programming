#include <stdio.h>

/**
 * main - main entry point
 * Description: This program should output abcdefghijklmnopqrstuvwxyz
 * Return: 0
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
	}
	putchar('\n');
	return (0); }
