#include <stdio.h>

/**
 * puts_half - print half of characters
 * @str: Input parameter
 * Return: void
 */

void puts_half(char *str);

int main(void)
{
	char *str;

	str = "0123456789";
	puts_half(str);
	return (0);
}

void puts_half(char *str)
{
	int i;
	int j;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	j = i / 2;
	while (i <= j)
	{
		printf("%c", str[j]);
		j++;
	}
	printf("\n");
}
