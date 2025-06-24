#include "main.h"

/**
 * puts2 - print every other char, start with 1st char, then new line
 * @str: the string
 * Return: (void)
 */
void puts2(char *str)
{
	int length = 0;

	while (str[length] != '\0' && str[length + 1] != '\0')
	{
	_putchar(str[length]);
	length += 2;
	}

	_putchar('\n');
}
