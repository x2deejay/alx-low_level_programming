#include "main.h"
/**
 * _strlen -returns length of a string
 * @s: string
 * Return: Returns length as integer
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;
	return (len);
}

/**
 * cap_string - capitalizes all words of a sring
 * @str: string
 * Return: char
 */

char *cap_string(char *str)
{
	int index = 0;

	while (str[++index])
	{
		while (!(str[index] >= 'a') && (str[index] <= 'z'))
			index++;
		if (str[index - 1] == ' ' || str[index - 1] == '\t' || str[index - 1] == '\n' || str[index - 1] == ',' || str[index - 1] == ';' || str[index - 1] == '.' || str[index - 1] == '!' || str[index - 1] == '?' || str[index - 1] == '"' || str[index - 1] == '(' || str[index - 1] == ')' || str[index - 1] == '{' || str[index - 1] == '}')
			str[index] -= 32;
	}
	return (str);
}

