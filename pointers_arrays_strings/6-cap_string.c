#include "main.h"
#include "stdio.h"

/**
 * cap_string - cap all first letter of words with rules
 * @str: the pointer
 * Return: str
 */
char *cap_string(char *str)
{
	int sen = 0;
	char separate[] = " \t\n,;.!?\"(){}";
	int prev;

	if (str[0] >= 'a' && str[0] <= 'z')
	{
	str[0] -= 32;
	}
	sen = 1;

	while (str[sen] != '\0')
	{
	prev = 0;
	while (separate[prev] != '\0')
	{
	if (str[sen - 1] == separate[prev] && str[sen] >= 'a' && str[sen] <= 'z')
	{
	str[sen] -= 32;
	}
	prev++;
	}
	sen++;
	}
	return (str);
}

