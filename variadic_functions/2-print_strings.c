#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - prints strings separated by a separator
 * @separator: the string to print between strings
 * @n: number of strings passed to the function
 *
 * Return: void cause only print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int count = 0;
	va_list args;
	char *string;

	va_start(args, n);

	while (count < n)
	{
	string = va_arg(args, char *)
	if (string == NULL)
	{
	printf("(nil)");
	}
	else
	{
	printf("%s", string);
	}
	if (separator != NULL && count != (n - 1))
	{
	printf("%s", separator);
	}
	count++;
	}

	va_end(args);
	printf("\n");
}
