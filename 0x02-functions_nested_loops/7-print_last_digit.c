#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Entry
 * Description:  prints the last digit of a number.
 * @r: number
 * Return: the value of r
 */

int print_last_digit(int r)
{
int a;

	if (r < 0)
		r = -r;

	a = r % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}
