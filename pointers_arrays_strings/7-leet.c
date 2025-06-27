#include "main.h"
#include "stdio.h"

/**
 * leet - encodes a string into 1337
 * @str: the pointer
 * Return: to pointer
 */
char *leet(char *str)
{
	char lett[] = "aAeEoOtTlL";
	char num[] = "4433007711";
	int sen = 0;
	int check;

	while (str[sen] != '\0')
	{
	check = 0;
	while (lett[check] != '\0')
	{
	if (str[sen] == lett[check])
	{
	str[sen] = num[check];
	}
	check++;
	}
	sen++;
	}
	return (str);
}
