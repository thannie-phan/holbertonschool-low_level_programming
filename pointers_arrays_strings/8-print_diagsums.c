#include "main.h"
#include "stddef.h"
#include "stdio.h"

/**
 * print_diagsums - print sum of 2 diagnoals of square matrix of int
 * @a: pointer to first element of the square matrix
 * @size: size matrix (rowsxcolumn)
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int count = 0;
	int leftdiag = 0;
	int rightdiag = 0;

	while (count < size)
	{
	leftdiag += a[count * size + count];
	rightdiag += a[count * size + count];
	count++;
	}
	printf("%d, %d\n", leftdiag, rightdiag);
}
