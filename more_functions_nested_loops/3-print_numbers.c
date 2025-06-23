#include "main.h"

/**
 * print_numbers - prints 0-9 followed by a new line.
 *
 * Return: Always 0 (Success)
 */
void print_numbers(void)
{
	char n = 48;

	while (n <= 57)
{
	_putchar(n);
	n++;
}
	_putchar('\n');
}
