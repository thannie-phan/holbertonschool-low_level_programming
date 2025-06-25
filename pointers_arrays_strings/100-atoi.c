#include "main.h"
#include "stdio.h"

/**
 * _atoi - convert a string to an integer
 * @s: pointer s
 * Return: 0
 */
int _atoi(char *s)
{
	int position = 0;
	int sign = 1;
	int result = 0;
	int find_number = 0;

	while (s[position] != '\0')
	{
	if (s[position] == '-' && find_number == 0)
	{
	sign *= -1;
	}
	else if (s[position] == '+' && find_number == 0)
	{
	sign = sign;
	}
	else if (s[position] >= '0' && s[position] <= '9')
	{
	find_number = 1;
	result = result * 10 + (s[position] - '0');
	}
	else if (find_number == 1)
	{
	break;
	}
	position++;
	}
	return (result * sign);
}
