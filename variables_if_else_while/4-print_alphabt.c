#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints the size of various types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
{
	if (c != 'q' && c != 'e')
	putchar (c);
	(c++);
}
	putchar ('\n');
	return (0);
}
