#include "stdio.h"
#include "stdlib.h"

/**
 * main - print the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 1 and error if input is invalid, 0 if success
 */
int main(int argc, char *argv[])
{
	int find = 1;
	int sum = 0;

	if (argc == 1)
	{
	printf("0\n");
	return (0);
	}

	while (find < argc)
	{
	int each = 0;

	while (argv[find][each] != '\0')
	{
	char actual_arg = argv[find][each];

	if (actual_arg < '0' || actual_arg > '9')
	{
	printf("Error\n");
	return (1);
	}
	each++;
	}

	sum = sum + atoi(argv[find]);
	find++;
	}

	printf("%d\n", sum);
	return (0);
}
