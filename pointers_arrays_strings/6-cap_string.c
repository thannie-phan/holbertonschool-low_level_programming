#include "main.h"
#include "stdio.h"

/**
 * cap_string - cap all first letter of words with rules
 * @str: the pointer
 * Return: str
 */
char *cap_string(char *str)
{
	int string = 0;
	char separate[] = " \t\n,;.!?\"(){}";
	int prev;

	while (str[string] != '\0')
	{
	prev = 0;
	while (separate[prev] != '\0')
	{
	if (str[string - 1] == separate[prev] && 'a' >= str[string] <= 'z')
	{
	str[string] -= 32;
	}
	prev++;
	}
	}
}
