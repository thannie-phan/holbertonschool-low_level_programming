#include "main.h"
#include "stdio.h"

/**
 * print_to_98 - print all numbers to 98
 * @n: number to check
 *
 *
 */
void print_to_98(int n)
{
	if (n == 98)
	{
	printf("%d\n", n);
	return;
	}
	else if (n < 98)
	{
	printf("%d, ", n);
	n++
	}
	else
	{
	printf("%d, ", n);
	n--
	}
}
