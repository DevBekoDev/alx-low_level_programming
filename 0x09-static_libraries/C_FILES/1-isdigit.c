#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Entry
 * Description: checks for a digit (0 through 9).
 * @c: int
 * Return: if c is digit 1 otherwise 0
 */

int _isdigit(int c)
{
	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
