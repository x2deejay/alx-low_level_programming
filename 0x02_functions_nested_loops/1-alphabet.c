#include "main.h"
/**
 *main - main entry point
 *
 *Decription: This program prints all lower case alphabets
 *abcdefghijklmnopqrstuvwxyz
 *Return: void
 */

void print_alphabet(void);

int main(void)
{
	int i;

	i = print_alphabet(void);
	_putchar(i)
	return (0);
}

void print_alphabet(void)
{
	int i;

	i = 'a';
	while (i <= 'z')
	{
		_putcar(i);
		i++
	}
	return
}
