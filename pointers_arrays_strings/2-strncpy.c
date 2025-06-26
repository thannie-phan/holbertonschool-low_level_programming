#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: destination
 * @src: source
 * @n: max no of chars to copy
 * Return: 
 */
int _strlen(char *s)
{
	int length_of_string = 0;

	while (s[length_of_string] != '\0')
	{
	length_of_string++;
	}
	return (length_of_string);
}
