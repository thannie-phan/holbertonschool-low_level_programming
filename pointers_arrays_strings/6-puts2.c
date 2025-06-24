#include "main.h"

/**
 * puts2 - print every other char, start with 1st char, then new line
 * @str: the string
 * Return: (void)
 */
void puts2(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
	if (length % 2 == 0)
	_putchar(str[length]);
	length++;
	}

	_putchar('\n');
}
