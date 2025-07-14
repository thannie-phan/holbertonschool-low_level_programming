#include "stdlib.h"
#include "function_pointers.h"

/**
 * int_index - function searches for int
 * @size: size of array
 * @array: the array to perform on
 * @cmp: the action to perform on the array
 * Return: -1 if no element matches, size <=0 or no array/action. int otherwise
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count = 0;

	if (array == NULL || cmp == NULL)
	return (-1);

	if (size <= 0)
	return (-1);

	while (count < size)
	{
	if (cmp(array[count]) != 0)
	{
	return (count);
	}
	count++;
	}
	return (-1);
}
