#include "main.h"
#include "stdio.h"

/**
 * _strncpy - copy a string
 * @src: the source
 * @dest: the destination
 * @n: max no of chars to copy
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int the_string = 0;

	while (src[the_string] != '\0' && the_string < n)
	{
	dest[the_string] = src[the_string];
	the_string++;
	}
	while (the_string < n)
	{
	dest[the_string] = '\0';
	the_string++;
	}
	return (dest);
}
