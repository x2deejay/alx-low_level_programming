#include "main.h"

/**
 * print_numbers - function that prints all numbers from
 * 0-9
 * Return: Returns nothing
 */

void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		_putchar(i);
	}
	_putchar(10);
}
