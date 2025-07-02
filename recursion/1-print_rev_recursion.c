#include "main.h"

/**
 * _print_rev_recursion - print a string in reverse, then new line
 * @s: string
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
	_putchar('\n');
	return;
	}
	_puts_recursion(s + 1);
	_putchar(*s);
}
