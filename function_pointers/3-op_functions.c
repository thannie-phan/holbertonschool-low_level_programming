#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - add 2 int
 * @a: first int
 * @b: second int
 *
 * Return: sum a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - a subtract b
 * @a: first int
 * @b: second int
 *
 * Return: result of a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - a times b
 * @a: first int
 * @b: second int
 *
 * Return: result of a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - a / b
 * @a: first int
 * @b: second int
 *
 * Return: result of a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - a modulus b
 * @a: first int
 * @b: second int
 *
 * Return: remainder of a divided by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
