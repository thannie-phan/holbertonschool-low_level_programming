#include "stdlib.h"
#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 *
 * Return: NULL if fail or min > min
 */
int *array_range(int min, int max)
{
	int count = 0;
	int *pointer;

	if (min > max)
	return (NULL);

	pointer = malloc(sizeof(int) * (max - min + 1));
	if (pointer == NULL)
	return (NULL);

	while (min <= max)
	{
	pointer[count] = min;
	count++;
	min++;
	}

	return (pointer);
}
