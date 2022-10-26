#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * print_list - prints number of elements in a node
 * @h: head of singly list
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	const list_t *new;
	unsigned int i;

	new = h;
	for (i = 0; new; i++)
		new = new->next;
	return (i);
}
