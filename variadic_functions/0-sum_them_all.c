#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all parameters
 * @n: number of arguments passed to the function
 *
 * Return: the total sum of all arguments, or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int total = 0;
	unsigned int current = 0;
	va_list args;

	if (n == 0)
	return (0);

	va_start(args, n);

	while (current < n)
	{
	total += va_arg(args, int);
	current++;
	}

	va_end(args);
	return (total);
}
