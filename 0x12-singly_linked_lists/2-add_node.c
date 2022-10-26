#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds node at the beginning of a list
 * @head: singl list head
 * @str: string to duplicate
 * Return: pointer to the added node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
	{
		new_node->str = strdup(str);
		new_node->len = _strlen(str);
		new_node->next = *head;
	}
	else
		return (NULL);
	if (*head != NULL)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
 * _strlen - string length
 * @str: string parameter
 * Return: string length
 */

int _strlen(const char *str)
{
	int i;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
