#include "main.h"

/**
 * factorial - Entry
 * Description: a function that returns
 * the factorial of a given number.
 * @n: number given
 * Return: -1 in error
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
