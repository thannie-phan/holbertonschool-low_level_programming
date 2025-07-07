#include "stdlib.h"

/**
 * _str_concat - malloc and concatenates 2 strings
 * @s1: string 1
 * @s2: string 2
 *
 * Return: NULL on failure. if NULL pass, treat as empty str
 */
char *_str_concat(char *s1, char *s2)
{
	int length1 = 0;
	int length2 = 0;
	int first_string = 0;
	int sec_string = 0;
	char *new_str;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[length1] != '\0')
	length1++;
	while (s2[length2] != '\0')
	length2++;

	new_str = malloc(sizeof(char) * (length1 + length2 + 1));

	if (new_str == NULL)
	return (NULL);

	while (first_string < length1)
	{
	new_str[first_string] = s1[first_string];
	first_string++;
	}
	while (sec_string < length2)
	{
	new_str[first_string] = s2[sec_string];
	sec_string++;
	}
	new_str[first_string] = '\0';
	return (new_str);
}
