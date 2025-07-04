#include "stdio.h"

/**
 * main - print the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int count = 0;

	while (argv[count] == NULL)
	{
	printf("%s\n", argv[count]);
	count++;
	return (0);
}
