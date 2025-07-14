#include "stdlib.h"
#include "function_pointers.h"

/**
 * array_iterator - array function
 * @size: size of array
 * @array: the array to perform on
 * @action: the action to perform on the array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count = 0;

	if (array == NULL || action == NULL)
	return;

	while (count < size)
	{
	action(array[count]);
	count++;
	}
}
