#include "main.h"

/**
 * print_triangle - print a right aligned triangle followed by new line
 * @triangle_size: this is the size of triangle
 * Return: Always 0 (Success)
 */
void print_triangle(int triangle_size)
{
	int current_row = 1;

	if (triangle_size <= 0)
	{
	_putchar('\n');

	return;
	}
	while (current_row <= triangle_size)
	{
	int number_of_spaces = triangle_size - current_row;
	int number_of_hashes = current_row;

	while (number_of_spaces > 0)
	{
	_putchar(' ');
	number_of_spaces--;
	}
	while (number_of_hashes > 0)
	{
	_putchar('#');
	number_of_hashes--;
	}
	_putchar('\n');
	current_row++;
	}
}
