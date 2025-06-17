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
	char number = '0';

	while (number <= '9')
	putchar (number++);
	putchar ('\n');
	return (0);
}
