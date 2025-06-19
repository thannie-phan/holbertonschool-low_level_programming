#include "main.h"

/**
 * time_table - print the 9x table
 * starting with 0
 */
void time_table(void)
{
int i, j, k;

for (i = 0; i < 8; i++)
{
	for (j = 0; j < 8; j++)
	{
		k = i * j;
		if (j == 0)
		{
			_putchar(k + '0');
		}

		if (k < 10 && j != 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(k + '0');
		}
		else if (k <= 10)
		{
			_putchar(',');
			_putchar(' ');
			_putchar((k / 10) + '0');
			_putchar((k % 10) + '0');
		}
	}
	_putchar('\n');
}
}
