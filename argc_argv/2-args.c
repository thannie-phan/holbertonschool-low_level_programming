#include "stdio.h"

/**
 * main - print the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
	printf("%s\n", argv[count]);
	count++;
	}
	return (0);
}
