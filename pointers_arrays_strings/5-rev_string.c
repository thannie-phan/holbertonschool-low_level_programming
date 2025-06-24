#include "main.h"

/**
 * rev_string - reverse a string
 * @s: the string
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	char temporary;
	int start = 0;
	int end = 0;

	while (s[end] != '\0')
	{
	end++;
	}
	end--;
	while (start < end)
	{
	temporary = s[start];
	s[start] = s[end];
	s[end] = temporary;
	start++;
	end--;
	}
}
