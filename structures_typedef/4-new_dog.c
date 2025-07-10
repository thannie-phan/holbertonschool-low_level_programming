#include "stdlib.h"
#include "stdio.h"
#include "dog.h"

/**
 * _strlen_recursion - returns length of string
 * @s: string
 *
 * Return: length of string int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
	return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * _strcpy - copy string at pointer scr to pointer dest
 * @src: the source
 * @dest: the destination
 * Return: (*dest)
 */
char *_strcpy(char *dest, char *src)
{
	int the_string = 0;

	while (src[the_string] != '\0')
	{
	dest[the_string] = src[the_string];
	the_string++;
	}
	dest[the_string] = '\0';
	return (dest);
}

/**
 * new_dog - create new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *find_new_dog;

	find_new_dog = malloc(sizeof(dog_t));

	if (find_new_dog == NULL)
	return (NULL);

	find_new_dog->name = malloc(sizeof(char) * (_strlen_recursion(name) + 1));

	if (find_new_dog->name == NULL)
	{
	free(find_new_dog);
	return (NULL);
	}

	_strcpy(find_new_dog->name, name);

	find_new_dog->owner = malloc(sizeof(char) * (_strlen_recursion(owner) + 1));

	if (find_new_dog->owner == NULL)
	{
	free(find_new_dog->name);
	free(find_new_dog);
	return (NULL);
	}

	_strcpy(find_new_dog->owner, owner);

	find_new_dog->age = age;

	return (find_new_dog);
}

