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
	int n = 0;
	int sec_string = 0;

	while (src[sec_string] != '\0')
	{
	sec_string++;
	}
	while (src[n] != ;\0')
	{
	dest[sec_string] = src[n];
	n++;
	sec_string++;
	}
	dest[sec_string] = '\0';
	return (dest);
}
