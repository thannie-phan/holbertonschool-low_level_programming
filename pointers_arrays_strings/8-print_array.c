#include "main.h"
#include "stdio.h"

/**
 * print_array - print elements of an array of integers, then new line
 * @n: the number of elements to be printed
 * @a: the array
 * Return: (void)
 */
void print_array(int *a, int n)
{
	int number = 0;

	while (number < n)
	{
	printf("%d", a[number]);
	if (number != n - 1)
	{
	printf(",");
	}
	number++;
	}
	printf("\n");
}
