#include "main.h"
#include "stddef.h"

/**
 * _strpbrk - locates first occur in s of anything in string accept
 * @s: string string
 * @accept: the substring
 * Return: number of bytes in s that consist of bytes from accept
 */
char *_strpbrk(char *s, char *accept)
{
	int count = 0;
	int match;

	while (s[count] != '\0')
	{
	match = 0;
	if (s[count] == accept[match])
	{
	return (&s[count]);
	}
	match++;
	}
	count++;
