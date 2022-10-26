#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds node at the end
 * @head: list head pointer
 * @str: string to duplicate
 * Return: pointer
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *last_node;

	last_node = *head;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node->next;
	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;
	return (new_node);
}

/**
 * _strlen - returns length
 * @str: argument for string
 * Return: int
 */

int _strlen(const char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
