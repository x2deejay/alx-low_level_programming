#include "main.h"
#include <stdio.h>
/**
 * main - main entry point
 *
 * Description: This function adds two numbers
 * Return: 0
 */

int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d\n", n);
	return (0);
}

int add(int a, int b)
{
	int result;
	result = a + b;
	return (result);
}
