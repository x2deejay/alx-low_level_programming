#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * free_list - frees list_t
 * @head: head of singly list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head != NULL)
	{
		while (head != NULL)
		{
			temp = head;
			head = head->next;
			free(temp->str);
			free(temp);
		}
	}
}
