#include "stdio.h"

/**
 * create_array - create an array of chars and initalizes it
 * @size: size of arrays
 * @c: the char to intialises the array with
 * Return: NULL if size = 0 or fail
 */
char *create_array(unsigned int size, char c);
{
	char *array;
	unsigned int find = 0;

	if (size == 0)
	{
	return (NULL);
	}

	array = malloc(sizeof(char) * size);
	if (array == NULL)
	{
	return (NULL);
	}

	while (find < size)
	{
	array[find] = c;
	find++;
	}

	return (array);

}
