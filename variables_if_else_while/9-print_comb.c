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
	char number = 48;

	while (number <= 57)
{
	putchar(number);
	if (number != 57)
	putchar(",");
	number++;
}
	putchar ('\n');
	return (0);
}
