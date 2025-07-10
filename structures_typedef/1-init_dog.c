#include "stdlib.h"
#include "main.h"
#include "dog.h"

/**
 * init_dog - initialise variable of type struct dog
 * @d: pointer to dog
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
