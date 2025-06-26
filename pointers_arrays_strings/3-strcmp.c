#include "main.h"
#include "stdio.h"

/**
 * _strcmp - compare 2 string
 * @s1: string 1
 * @s2: string 2
 * Return: an int
 */
int _strcmp(char *s1, char *s2)
{
	int compare = 0;

	while (s1[compare] != '\0' && s2[compare] != '\0')
	{
	if (s1[compare] != s2[compare])
	{
	return (s1[compare] - s2[compare]);
	}
	compare++;
	}

	return (s1[compare] - s2[compare]);
}
