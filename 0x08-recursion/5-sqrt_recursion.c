#include "main.h"
#include <math.h>

/**
 * natural_sqrt - Entry
 * Descripiton:  a function that check for the natural
 * square root of a number
 * @x: number
 * @y: number
 * Return: -1 in error
 */
int natural_sqrt(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (natural_sqrt(x, y + 1));
}

/**
 * _sqrt_recursion - Entry
 * Description:  a function that returns the natural square root of a number.
 * @n: number
 * Return: -1 in error
 */
int _sqrt_recursion(int n)
{
	return (natural_sqrt(n, 1));
}
