#include "main.h"
#include <math.h>

/**
 * _pow_recursion - Entry
 * Description: a function that returns
 * the value of x raised to the power of y.
 * @x: int
 * @y: int
 * Return: if y < 0 : -1 else retunr x ** y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0 || x == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
