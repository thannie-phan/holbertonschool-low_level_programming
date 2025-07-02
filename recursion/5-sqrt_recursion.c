#include "main.h"

int actual_sqrt_recursion(int number, int times);

/**
 * _sqrt_recursion - returns natural square root of num
 * @n: number
 *
 * Return: value
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}

	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - recursion to find the natural number
 * @number: number
 * @times: times
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int number, int times)
{
	if (times * times > number)
		return (-1);
	if (times * times == number)
		return (times);
	return (actual_sqrt_recursion(number, times + 1));
}
