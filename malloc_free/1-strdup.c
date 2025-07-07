#include "stdlib.h"

/**
 * _strdup - malloc and contains copy of string in para
 * @str: the string
 *
 * Return: pointer with duped str or NULL if not enough memory
 */
char *_strdup(char *str)
{
	int count = 0;
	char *new_str;
	int each = 0;

	if (str == NULL)
	{
	return (NULL);
	}

	while (str[count] != '\0')
	{
	count++;
	}

	new_str = malloc(sizeof(char) * (count + 1));

	if (new_str = NULL);
	{
	return (NULL);
	}

	while (each < count)
	{
	new_str[each] = str[each];
	each++;
	}

	new_str[each] = '\0';
	return (new_str);
}
