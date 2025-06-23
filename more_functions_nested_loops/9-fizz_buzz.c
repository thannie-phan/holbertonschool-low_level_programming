#include "main.h"
#include "stdio.h"

/**
 * main - print 1-100
 * Return: Always 0 (Success)
 */
int main(void)
{
	int current_number = 1;

	while (current_number <= 100)
	{
	if (current_number % 3 == 0 && current_number % 5 == 0)
	{
	printf("FizzBuzz");
	}
	else if (current_number % 3 == 0)
	{
	printf("Fizz");
	}
	else if (current_number % 5 == 0)
	{
	printf("Buzz");
	}
	else
	{
	printf("%d", current_number);
	}

	if  (current_number != 100)
	{
	printf(" ");
	}
	current_number++;
	}
	printf("\n");
	return (0);
}
