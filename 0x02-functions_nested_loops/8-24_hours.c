#include "main.h"

/**
 * main - main entry point
 *
 * Description: This function prints every minute of
 * the day of Jack Bauer
 * Return: 0
 */

int main(void)
{
	jack_bauer();
	return (0);
}

void jack_bauer(void)
{
	int hours;
	int minutes;
	int hours_remainder;
	int mins_remainder;

	hours = 0;
	minutes = 0;
	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			mins_remainder = minutes % 10;
			hours_remainder = hours % 10;
			_putchar(hours / 10 + '0');
			_putchar(hours_remainder + '0');
			_putchar(':');
			_putchar(minutes / 10 + '0');
			_putchar(mins_remainder + '0');
			minutes++;
			_putchar('\n');
		}
		hours++;
		minutes = 0;
	}
}
