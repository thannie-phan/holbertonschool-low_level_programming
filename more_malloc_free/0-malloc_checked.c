#include "stdlib.h"
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: what to allocate memory for
 *
 * Return: void. if fails, exit (98)
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
	exit(98);

	return (pointer);
}
