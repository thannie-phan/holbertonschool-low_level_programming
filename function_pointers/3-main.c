#include <stdlib.h>
#include "calc.h"
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

	if (argc != 4)
	{
	printf("Error\n");
	exit (98);
	}

	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	char *s = argv[2];

	if (get_op_func(s) == NULL)
	{
	printf("Error\n");
	exit (99);
	}

	if ((strcmp(s, "/") == 0 || strcmp(s, "%") == 0) && (b == 0)
	{
	printf("Error\n");
	exit (100);
	}

	int (*f) (int, int);
	f = get_op_func(s);
	result = f(a, b);

	printf("%d\n", result);

	return (0);
}
