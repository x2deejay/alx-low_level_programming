#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints number of elements
 * @h: singly list head
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	const list_t *new;
	unsigned int i;
	
	new = h;
	for (i = 0; new; i++)
		new = new->next;
	return (i);
}
