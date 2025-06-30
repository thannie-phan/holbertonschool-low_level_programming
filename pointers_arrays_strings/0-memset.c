#include "main.h"

/**
 * _memset - fills the first n bytes of memory area in *s with constant byte b
 * @b:contant byte
 * @s: pointer s
 * @n: the number of bytes to fill
 * Return: *s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unassigned int count = 0;

	while (count < n)
	{
	s[count] = b;
	n++;
	}
	return (s);
}
