#include "stdio.h"

/**
 * main - print the name of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", *argv);
