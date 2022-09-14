#include "main.h"

/**
 * main - main entry point
 *
 * Description: This function prints the last digit
 */

int main(void)
{
	int r;

	print_last_digit(98);
	print_last_digit(0);
	r = print_last_digit(-1024);
	_putchar('0' + r);
	_putchar('\n');
	return (0);
}

int print_last_digit(int c)
{
	int result;
	
	result = c % 10;
	if (result < 0)
	{
		result += -1;
	}
	_putchar(result + '0');
	return (result);
}

