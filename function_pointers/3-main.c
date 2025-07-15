#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include <string.h>

/**
 * main - calculator program
 * @argc: argument
 * @argv: argument array
 *
 *
 * Return: 0 if success, exits with 98, 99, or 100 on error.
 */
int main(int argc, char *argv[])
{
	int result;
	int a, b;
	char *s;
	int (*f) (int, int);

	if (argc != 4)
	{
	printf("Error\n");
	exit (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2]; 

	if (get_op_func(s) == NULL)
	{
	printf("Error\n");
	exit (99);
	}

	if ((strcmp(s, "/") == 0 || strcmp(s, "%") == 0) && (b == 0))
	{
	printf("Error\n");
	exit (100);
	}

	f = get_op_func(s);
	result = f(a, b);

	printf("%d\n", result);

	return (0);
}
