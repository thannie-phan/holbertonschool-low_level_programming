#include "stdio.h"

/**
 * main - print the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 and error if not enough input, 0 if success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

	int a = atoi(argv[1]);
	int b = atoi(argc[2]);
	int result = a * b;

	printf("%d\n", result);
	return (0);
}
