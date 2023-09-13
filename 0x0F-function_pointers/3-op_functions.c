#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - sum of a and b
 * @a: integer
 * @b: integer
 * Return: sum of a & b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - the difference of a and b
 * @a: number
 * @b: number
 * Return: the difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - the product of a and b
 * @a: number
 * @b: number
 * Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -  division of a by b
 * @a: number
 * @b: number
 * Return: the result of  division of a by b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - the remainder of the division of a by b
 * @a: number
 * @b: number
 * Return: the remainder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}

