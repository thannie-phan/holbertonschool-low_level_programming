#include "stdio.h"
#include "stdlib.h"

/**
 * main - print the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 and error if not enough input, 0 if success
 */
int main(int argc, char *argv[])
{
	int a, b, result;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	result = a * b;

	printf("%d\n", result);
	return (0);
}
