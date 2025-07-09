#include "stdlib.h"
#include "main.h"

/**
 * _calloc - allocates memory for an array
 * @nmemb: elements
 * @size: size of elements
 *
 * Return: NULL if fail or if nmemb || size == 0. Set memory to 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *allocated_memory;
	unsigned int total_lockers = 0, locker_number = 0;
	char *current_locker;

	if (nmemb == 0 || size == 0)
	return (NULL);

	total_lockers = nmemb * size;

	allocated_memory = malloc(sizeof(char) * total_lockers);

	if (allocated_memory == NULL)
	return (NULL);

	current_locker = (char *)allocated_memory;

	while (locker_number < total_lockers)
	{
	current_locker[locker_number] = 0;
	locker_number++;
	}

	return (allocated_memory);
}
