#include "main.h"

/**
 * more_numbers - print 10x the numbers, from 0-14 then new line.
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int i;
	int n;

	for (i = 0; i < 10; i++)
{
	for (n = 0; n <= 14; n++)
	{
	if (n >= 10)
	_putchar('0' + n / 10);
	_putchar('0' + n % 10);
	}
	_putchar('\n');
}
}
