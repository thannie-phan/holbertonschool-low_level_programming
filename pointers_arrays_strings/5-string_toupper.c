#include "main.h"
#include "stdio.h"

/**
 * string_toupper - changes all lowercase to uppercase
 * @str: the pointer
 * Return: str
 */
char *string_toupper(char *str)
{
	int string = 0;

	while (str[string] != '\0')
	{
	if (str[string] >= 'a' && str[string] <= 'z')
	{
	str[string] -= 32;
	}
	string++;
	}
	return (str);
}
