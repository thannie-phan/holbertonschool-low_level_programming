#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print out list and return no of nodes
 * @h: the connector
*
 * Return: no of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);

		count++;
		h = h->next;
	}
	return (count);
}
