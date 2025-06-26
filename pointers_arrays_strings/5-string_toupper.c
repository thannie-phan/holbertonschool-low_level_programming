#include "main.h"
#include "stdio.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @str: the pointer
 * Return: str
 */
char *string_toupper(char *str)
{
	int string;

	while (str[string] != '\0')
	{
	if (string >= 'a' && string <= 'z')
	{
	str[string] -= 32;
	}
	string++;
	}
	return (str);
}
