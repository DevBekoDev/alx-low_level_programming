#include "main.h"

/**
 * print_sign - Entry point
 * Description:  prints the sign of a number.
 *
 * @n: input
 * Return: if poisitve 1, negative -1 or zero 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
