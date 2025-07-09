#include "stdlib.h"
#include "main.h"

/**
 * string_nconcat - concanates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to copy from s2 if n < s2
 * Return: string. NULl if fails and if NULL is passed, treat as empty
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int length1 = 0, length2 = 0, first_string = 0, sec_string = 0;
	char *new_str;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[length1] != '\0')
	length1++;

	while (s2[length2] != '\0')
	length2++;

	if (n < length2)
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
	first_string++;
	sec_string++;
	}

	new_str[first_string] = '\0';
	return (new_str);
}
