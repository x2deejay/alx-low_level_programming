#include "main.h"

int main(void)
{
	int *a;
	int *b;
	int k;
	int l;

	k = 5;
	l = 7;
	a = &k;
	b = &l;
	swap_int(a, b);
	_putchar(a);
	_putchar(b);
	return (0);
}
