#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - prints numbers separated by a given string
 * @separator: the string to print between numbers
 * @n: number of integers passed to the function
 *
 * Return: void cause only print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;
	int number  = 0;

	va_list args;

	va_start(args, n);

	while (count < n)
	{
	number = va_arg(args, int);
	printf("%d", number);
	if (separator != NULL && count != (n - 1))
	{
	printf("%s", separator);
	}
	count++;
	}

	va_end(args);
	printf("\n");
}

