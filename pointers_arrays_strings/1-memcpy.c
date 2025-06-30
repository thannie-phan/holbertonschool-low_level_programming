#include "main.h"

/**
 * _memcpy - copy n bytes of memory area scr to dest
 * @dest: destination memory
 * @src: source memory
 * @n: the number of bytes to fill
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count = 0;

	while (count < n)
	{
	dest[count] = src[count];
	count++;
	}
	return (dest);
}
