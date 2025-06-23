#include "main.h"

/**
 * print_square - print a square, followed by new line
 * @size: this is the size of square
 * Return: Always 0 (Success)
 */
void print_square(int size)
{
	int current_line = 0;

	if (size <= 0)
	{
	_putchar('\n')
	return;
	}
	while (current_line < size)
	{
	int number_of_hashes = 0;

	while (number_of_hashes < size)
	{
	_putchar('#');
	number_of_hashes++;
	}
	_putchar('\n');
	current_line++;
}
