#include "main.h"

/**
 * print_most_numbers - prints 0-9 but not 2 and 4 followed by a new line.
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
	char n = 48;

	while (n <= 57)
{
	if (n != 50 && n != 52)
	_putchar(n);
	n++;
}
	_putchar('\n');
}
