#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_node - add new node at start
 * @*h: pointer to head pointer
 * @str: string element to store in node
 *
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);
	new_node->len = strlen(new_node->str);
	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

