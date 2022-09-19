#include <stdio.h>

/**
 * rev_string - prints string in reverse
 * @s: Input string pointer
 * Return: void
 */

void rev_string(char *s)
{
	int count;
	int i;
	char temp;
	int middle;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	middle = count / 2;
	for (i = 0; i < middle; i++)
	{
		temp = s[i];
		s[i] = s[count - i - 1];
		s[count - i - 1] = temp;
	}
}
