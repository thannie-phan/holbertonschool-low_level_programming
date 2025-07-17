#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all- prints everything
 * @format: type of arguments c, i, f, s
 *
 * Return: void cause only print
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int count = 0;
	char *separator = "";
	char *string;

	va_start(args, format);

	while (format && format[count] != '\0')
	{
	if (format[count] == 's' || format[count] == 'i' ||
	format[count] == 'f' || format[count] == 'c')
	{
	printf("%s", separator);
	if (format[count] == 'c')
	printf("%c", (char)va_arg(args, int));
	else if (format[count] == 'i')
	printf("%d", va_arg(args, int));
	else if (format[count] == 'f')
	printf("%f", (float)va_arg(args, double));
	else if (format[count] == 's')
		{
		string = va_arg(args, char *);
		if (string == NULL)
		printf("(nil)");
		else
		printf("%s", string);
		}
	separator = ", ";
	}
	count++;
	}
	va_end(args);
	printf("\n");
}
