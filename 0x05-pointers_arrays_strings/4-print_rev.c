#include <stdio.h>

/**
 * print_rev - prints string in reverse
 * @str: Input string pointer
 * Return: void
 */

void print_rev(char *str);

int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	print_rev(str);
	return (0);
}


void print_rev(char *str)
{
	int count;
	int j;
	int i;
	char temp;
	int middle;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	j = count;
	middle = j / 2;
	for (i = 0; i < middle; i++)
	{
		temp = str[i];
		str[i] = str[j - i];
		str[j - 1] = temp;
	}
	printf("\n");


}
