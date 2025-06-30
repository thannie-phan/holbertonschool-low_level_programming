#include "main.h"

/**
 * _strchr -locates a char in a string
 * @s: string s
 * @c: char
 * Return: s[c] or null
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
	if (*s == c)
	return (s);
	s++;
	}
	if (c == '\0')
	{
	return (s);
	}
	return (NULL);
}
