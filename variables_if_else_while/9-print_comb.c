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
	printf("%d", number);
	if (number != 57)
	prinf(",");
	number++;
}
	putchar ('\n');
	return (0);
}
