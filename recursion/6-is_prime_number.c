#include "main.h"

int check_prime(int number, int divisor);

/**
 * is_prime_number - check if int is a prime number
 * @n: number
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}

	return (check_prime(n, 2));
}

/**
 * check_prime - recursion to check if number is prime
 * @number: number
 * @divisor: divisor
 *
 * Return: 1 if prime, 0 otherwise
 */
int check_prime(int number, int divisor)
{
	if (divisor * divisor > number)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (check_prime(number, divisor + 1));
}
