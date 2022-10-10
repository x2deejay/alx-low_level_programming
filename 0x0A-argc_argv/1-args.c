#include <stdlib.h>
#include <stdio.h>

/**
 * main - main entry point
 * @argc: auguements count
 * @argv: arguements pointer
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argv[0])
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
