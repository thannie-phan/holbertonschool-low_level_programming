#include "stdio.h"

/**
 * main - print the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: print prog name
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
