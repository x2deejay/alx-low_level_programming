#include "main.h"

/**
 * print_numbers - This function prints numbers 0-9
 * Return: 0
 */

int main(void)
{
	print_numbers();
	return (0);
}

void print_numbers(void)
{
	int i;

	while (i <= 9)
	{
		_putchar(i);
		_putchar('\n');
		i++;
	}
}
