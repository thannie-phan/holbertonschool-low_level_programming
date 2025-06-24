#include "main.h"

/**
 * _puts - print a string, then new line
 * @str: the string
 * Return: (0)
 */
void _puts(char *str)
{
	int length_of_string = 0;

	while (str[length_of_string] != '\0')
	{
	_putchar(str[length_of_string]);
	length_of_string++;
	}

	_putchar('\n');
}
