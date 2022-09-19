#include <stdio.h>
#include <conio.h>

/**
 * _atoi - converts string to integer
 * @s: Input parameter
 * Return: 0
 */

int _atoi(char *s)
{
	char inputString[20];
	int sign;
	int number;
	int index;

	sign = 1;
	number = 0;
	index = 0;
	if (inputString[0] == '-')
	{
		sign = -1;
		index = 1;
	}
	while (inputString[index] != '\0')
	{
		if (inputString[index] >= '0' && inputString[index] <= '9')
		{
			number = number * 10 + inputString[index] - '0';
		}
		else
		{
			break;
		}
		index++;
	}
	printf("%s\n", inputString);
	printf("%d\n", number);
	getch();
	return (0);
}
