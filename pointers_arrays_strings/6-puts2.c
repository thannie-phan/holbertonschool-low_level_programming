#include "main.h"

/**
 * puts2 - print every other char, start with 1st char, then new line
 * @str: the string
 * Return: (void)
 */
void puts2(char *str)
{
	int length_of_string = 0;

	while (str[length_of_string] != '\0')
	{
	_putchar(str[length_of_string]);
	length_of_string += 2;
	}

	_putchar('\n');
}
