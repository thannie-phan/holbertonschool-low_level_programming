#include "main.h"
#include "stdio.h"

/**
 * _strcpy - copy string at pointer scr to pointer dest
 * @src: the source
 * @dest: the destination
 * Return: (*dest)
 */
char *_strcpy(char *dest, char *src)
{
	int the_string = 0;

	while (src[the_string] != '\0')
	{
	dest[the_string] = src[the_string];
	the_string++;
	}
	dest[the_string] = '\0';
	return (dest);
}
