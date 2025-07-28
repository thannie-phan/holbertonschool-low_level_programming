#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * add_node - add new node at start
 * @head: pointer to head pointer
 * @str: string element to store in node
 *
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	int length_of_string = 0;

	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);

	while (str[length_of_string] != '\0')
	length_of_string++;
	new_node->len = length_of_string;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}

