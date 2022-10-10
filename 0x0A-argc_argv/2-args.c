#include <stdio.h>

/**
 * main - main entry point
 * @argc: arguement count parameter
 * @argv: arguement array pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
