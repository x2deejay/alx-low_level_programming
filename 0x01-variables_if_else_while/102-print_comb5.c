#include <stdio.h>
/**
 *main - main entry point

Description: This program runs through the entry point
to output all possible combinations of two two-digit numbers
with output '00 01, 00 02, 00 03, 00 04, 00 05, 00 06, 00 07
00 08, 00 09, 00 10, 00 11, [...]
Return: 0

 */
int main(void)
{
	int p;
	int q;

	for (p = 0; p <= 98; p++)
	{
		for (q = p + 1; q <= 99; q++)
		{
			putchar((p / 10) + '0');
			putchar((p % 10) + '0');
			putchar(' ');
			putchar((q / 10) + '0');
			putchar((q % 10) + '0');

			if (p == 98 && q == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
