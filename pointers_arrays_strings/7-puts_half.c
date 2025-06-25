#include "main.h"

/**
 * puts_half - print half of a string, then new line
 * @str: the string
 * Return: (void)
 */
void puts_half(char *str)
{
	int length = 0;
	int n;

	while (str[length] != '\0')
	{
	_putchar(str[length]);
	length++;
	}
	if (length % 2 == 0)
	{
	n = length / 2;
	}
	else
	n = (length + 1) / 2;
	while (str[n] != '\0')
	{
	_putchar(str[n]);
	n++;
	}
	_putchar('\n');
}
