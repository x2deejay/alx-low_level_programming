#include <stdio.h>
/**
 * main - main entry point
 * Return: 0
 */

int main(void)
{
	int num;

	num = 1;
	while (num++ < 100)
	{
		if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz")
			}
		}
		else
		{
			Printf("%d", num);
		}
	}
	printf("\n");
}