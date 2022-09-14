#include <stdio.h>

int main(void)
{
	int p;

	p = 0;
	for (p = 0; p <= 99; p++)
	{
		putchar((p / 10) + '0');
		putchar((p % 10) + '0');
		putchar(' ');
	}
	return (0);
}
