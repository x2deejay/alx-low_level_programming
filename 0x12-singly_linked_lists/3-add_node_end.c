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
