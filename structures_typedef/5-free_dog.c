#include "stdlib.h"
#include "main.h"
#include "dog.h"

/**
 * free_dog - frees dog function
 * @d: pointer to dog_t
 *
 *
 *
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	free(d);
	}
}
