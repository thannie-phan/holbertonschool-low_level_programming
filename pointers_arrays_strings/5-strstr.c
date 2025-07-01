#include "main.h"
#include "stddef.h"

/**
 * _strstr - find needle in the haystack
 * @haystack: string string
 * @needle: the substring
 * Return: needle
 */
char *_strstr(char *haystack, char *needle)
{
	int count = 0;
	int match;

	if (needle[0] == '\0')
	{
	return (haystack);
	}
	while (haystack[count] != '\0')
	{
	match = 0;
	while (needle[match] != '\0' && haystack[count + match] == needle[match])
	{
	match++;
	}
	if (needle[match] == '\0')
	{
	return (&haystack[count]);
	}
	count++;
	}
	return (NULL);
}
