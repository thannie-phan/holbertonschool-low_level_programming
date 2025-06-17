#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the numbers of base 16 in lowercase which is 0-9 then a-f followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char number;

	for (number = '0'; number <= '9'; number++)
		putchar (number);
	for (number = 'a'; number <= 'f'; number++)
		putchar (number);
	putchar ('\n');
	return (0);
}
