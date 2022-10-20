#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * op_char - prints character
 * @c: character input
 * Return: nothing
 */

void op_char(va_list c)
{
	printf("%c", va_arg(c, int));
}

/**
 * op_string - prints string
 * @s: string input
 * Return: nothing
 */

void op_string(va_list s)
{
	char *str;

	str = va_arg(s, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * op_int - prints integers
 * @i: input integer
 * Return: nothing
 */

void op_int(va_list i)
{
	printf("%d", va_arg(i, int));
}

/**
 * op_float - prints decimal numbers
 * @f: input float
 * Return: nothing
 */

void op_float(va_list f)
{
	printf("%f", va_arg(f, double));
}

/**
 * print_all - prints variadic arguements of different types
 * @format: type
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list ap;
	unsigned int i, j;
	char *separator;

	t_op op[] = {
		{"c", op_char},
		{"s", op_string},
		{"i", op_int},
		{"f", op_float},
		{NULL, NULL}
	};
	va_start(ap, format);
	separator = "";
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while (op[j].t != NULL)
		{
			if (*(op[j].t) == format[i])
			{
				printf("%s", separator);
				op[j].f(ap);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}
	va_end(ap);
	printf("\n");
}
