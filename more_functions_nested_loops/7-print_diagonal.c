#include "main.h"

/**
 * print_diagonal - print a diagonal line in the terminal
 * @n: the number of times the character \ should be printed
 * Return: Always 0 (Success)
 */
void print_diagonal(int n)
{
	int current_line = 0;

	if (n <= 0)
	{
	_putchar('\n');
	return;
	}

	while (current_line < n)
	{
	int number_of_spaces = 0;

	while (number_of_spaces < current_line)
	{
	_putchar(' ');
	number_of_spaces++;
	}
	_putchar('\\');
	_putchar('\n');
	current_line++;
}
