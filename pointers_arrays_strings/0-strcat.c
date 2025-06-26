#include "main.h"
#include "stdio.h"

/**
 * _strcat - concatenates 2 strings
 * @src: the source
 * @dest: the destination
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int first_string = 0;
	int sec_string = 0;

	while (dest[sec_string] != '\0')
	{
	sec_string++;
	}
	while (src[first_string] != '\0)
	{
	dest[sec_string] = src[first_string];
	first_string++;
	sec_string++;
	}
	dest[sec_string] = '\0';
	return (dest);
}
