#include "main.h"

/**
 * print_line - print a straight line in the terminal
 * @n: the number of times the character _ should be printed
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	if (n <= 0)
	{
	_putchar('\n');
	return;
	}

	while (n > 0)
	{
	_putchar('_');
	n--;
	}
	_putchar('\n');
}
