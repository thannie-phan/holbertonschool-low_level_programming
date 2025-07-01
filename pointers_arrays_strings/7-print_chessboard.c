#include "main.h"
#include "stddef.h"

/**
 * print_chessboard - print the chessboard
 * @a: 2D array for the chessboard
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int row = 0;
	int column;

	while (row < 8)
	{
	column  = 0;
	while (column < 8)
	{
	_putchar(a[row][column]);
	column++;
	}
	_putchar('\n');
	row++;
	}
}
