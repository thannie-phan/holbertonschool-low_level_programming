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
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar (letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar (letter);
	putchar ('\n');
	return (0);
}
