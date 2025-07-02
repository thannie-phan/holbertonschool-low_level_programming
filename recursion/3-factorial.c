#include "main.h"

/**
 * factorial - returns factorial of a given number
 * @n: number
 *
 * Return: factorial value
 */
int factorial(int n)
{
	if (n < 0)
	{
	return (-1);
	}

	if (n == 0)
	{
	return (0);
	}

	return (n * factorial(n - 1));
}
