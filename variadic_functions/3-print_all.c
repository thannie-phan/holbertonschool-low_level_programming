#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);
void print_all(const char * const format, ...);

/**
 * print_char - print char
 * @arg: va_list with the char to print
 */
void print_char(va_list arg)
{
	char letter;

	letter = va_arg(arg, int);
	printf("%c", letter);
}

/**
 * print_int - print int
 * @arg: va_list with the int to print
 */
void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}

/**
 * print_float - printlfloat
 * @arg: va_list with the float to print
 */
void print_float(va_list arg)
{
	float num;

	num = va_arg(arg, double);
	printf("%f", num);
}

/**
 * print_string - print string
 * @arg: va_list with the string to print
 */
void print_string(va_list arg)
{
	char *string;

	string = va_arg(arg, char *);

	if (string == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", string);
}

/**
 * print_all- prints everything
 * @format: type of arguments c, i, f, s
 *
 * Return: void cause only print
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int f_count = 0;
	int p_count;
	char *separator = "";

	struct printer printer_format[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);

	while (format != NULL && format[f_count] != '\0')
	{
		p_count = 0;

		while (p_count < 4 && format[f_count] != *printer_format[p_count].symbol)
		{
			p_count++;
		}

		if (p_count < 4)
		{
			printf("%s", separator);
			printer_format[p_count].print(args);
			separator = ", ";
		}

		f_count++;
	}

	printf("\n");
	va_end(args);
}

