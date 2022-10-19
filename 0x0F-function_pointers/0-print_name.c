#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - This function prints name as inputed
 * @name: Name input parameter
 * @f: function pointer parameter
 * Return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
