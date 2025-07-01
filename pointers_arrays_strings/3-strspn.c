#include "main.h"
#include "stddef.h"

/**
 * _strspn - gets length of a prefix substring
 * @s: string string
 * @accept: the allowed set
 * Return: number of bytes in s that consist of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	int look;
	int match;

	while (*s != '\0')
	{
	look = 0;
	match = 0;
	while (accept[look] != '\0')
	{
	if (*s == accept[look])
	{
	match = 1;
	break;
	}
	look++;
	}
	if (match == 0)
	{
	break;
	}
	count++;
	s++;
	}
	return (count);
}
