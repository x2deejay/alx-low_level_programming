#include <stdio.h>

void start_up_func(void)_attribute_((constructor));

/**
 * start_up_func - function that gets executed before the main function
 * Return: nothing
 */

void start_up_func(void)
{
	prinf("You're beat! and yet, you must allow,\n"
		"I bore my house upon my back!\n");
}
