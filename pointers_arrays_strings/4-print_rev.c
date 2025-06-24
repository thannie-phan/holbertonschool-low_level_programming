#include "main.h"

/**
 * print_rev - print a string in reverse, then new line
 * @s: the string
 * Return: (0)
 */
void print_rev(char *s)
{
	int position = _strlen(s);

	while (position > 0)
	{
	position--;
	_putchar(s[position]);
	}
	_putchar('\n');
}
