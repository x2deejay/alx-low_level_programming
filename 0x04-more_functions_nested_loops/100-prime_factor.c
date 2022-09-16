#include <stdio.h>

/**
 * main - prints the largest prime factor
 * of a number
 * Return: 0
 */

int main(void)
{
	long number;
	int inc;

	number = 612852475143;
	while (inc++ < number / 2)
	{
		if (number % inc == 0)
		{
			number /= 2;
			continue;
		}
		for (inc = 3; inc < number / 2; inc += 2)
		{
			if (number % inc == 0)
			{
				number /= inc;
			}
		}
		printf("%ld\n", number);
	}
	return (0);
}
