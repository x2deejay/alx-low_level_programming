#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct op - struct for pointer and function pointer
 *
 * t_op - struct op alias
 * @t: pointer
 * @f: function pointer
 */

typedef struct op
{
	char *t;
	void (*f)(va_list);
} t_op;

#endif /* VARIADIC_FUNCTIONS_H */
