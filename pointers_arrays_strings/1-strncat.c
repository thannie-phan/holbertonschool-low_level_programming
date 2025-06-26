#include "main.h"
#include "stdio.h"

/**
 * _strncat - concatenates 2 strings
 * @src: the source
 * @dest: the destination
 * @n: first string to copy
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int first_string = 0;
	int sec_string = 0;

	while (dest[sec_string] != '\0')
	{
	sec_string++;
	}
	while (src[first_string] != '\0' && first_string < n)
	{
	dest[sec_string] = src[first_string];
	n++;
	sec_string++;
	}
	dest[sec_string] = '\0';
	return (dest);
}
